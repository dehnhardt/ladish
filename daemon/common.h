/* -*- Mode: C ; c-basic-offset: 2 -*- */
/*
 * LADI Session Handler (ladish)
 *
 * Copyright (C) 2009 Nedko Arnaudov <nedko@arnaudov.name>
 *
 **************************************************************************
 * This file contains stuff that is needed almost everywhere in the ladishd
 **************************************************************************
 *
 * LADI Session Handler is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * LADI Session Handler is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with LADI Session Handler. If not, see <http://www.gnu.org/licenses/>
 * or write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef COMMON_H__CFDC869A_31AE_4FA3_B2D3_DACA8488CA55__INCLUDED
#define COMMON_H__CFDC869A_31AE_4FA3_B2D3_DACA8488CA55__INCLUDED

#include "config.h"             /* configure stage result */

#include <stdbool.h>            /* C99 bool */
#include <stdint.h>             /* fixed bit size ints */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <errno.h>
#include <dbus/dbus.h>
#include <uuid/uuid.h>

#include "../dbus/service.h"
#include "../common/klist.h"
#include "../common/debug.h"

/* JACK port or virtual port */
struct port
{
  struct list_head siblings_studio_all;    /* link for the studio::all_ports list */
  struct list_head siblings_studio;        /* link for the studio::ports list */
  struct list_head siblings_room;          /* link for the room::ports list */
  struct list_head siblings_client;        /* link for the port list of the client */
  struct list_head siblings_vclient;       /* link for the port list of the virtual client */

  uuid_t uuid;                             /* The UUID of the port */
  bool virtual;                            /* Whether the port is virtual or JACK port */
  char * jack_name;                        /* JACK name (short). Not valid for virtual ports. */
  uint64_t jack_id;                        /* JACK port ID. Not valid for virtual ports. */
  char * human_name;                       /* User assigned name */

  struct client * client_ptr;              /* JACK client this port belongs to. Not valid for virtual ports. */
  struct client * vclient_ptr;             /* Virtual client this port belongs to. NULL if there is no virtual client associated. */

  /* superconnections are not in these lists */
  struct list_head input_connections;      /* list of input connections, i.e. connections that play to this port */
  struct list_head output_connections;     /* list of output connections, i.e. connections that capture from this port */
};

/* connection between two ports */
/* virtual connection is connection where at least one the ports is virtual */
/* superconnection is connection that implements virtual connection chain at JACK level */
struct connection
{
  struct list_head siblings_studio_all;    /* link for the studio::all_connections list */
  struct list_head siblings_jack;          /* link for the studio::jack_connections list, not valid for virtual connections */
  struct list_head siblings_capture_port;  /* link for the port::output_connections list, not valid for superconnections */
  struct list_head siblings_playback_port; /* link for the port::input_connections list, not valid for superconnections */

  struct connection * superconnection;     /* Superconnection. NULL for non-virtual connections */
  uint64_t jack_id;                        /* JACK connection ID, not valid for virtual connections */

  struct port * capture_port_ptr;          /* The capture output port */
  struct port * playback_port_ptr;         /* The playback input port */
};

struct client
{
  struct list_head siblings_studio_all;    /* link for the studio::all_clients list */
  struct list_head siblings_room;          /* link for the room::clients list */
  struct list_head ports;                  /* List of ports that belong to the client */
  uuid_t uuid;                             /* The UUID of the client */
  uint64_t jack_id;                        /* JACK client ID */
  char * jack_name;                        /* JACK name, not valid for virtual clients */
  char * human_name;                       /* User assigned name, not valid for studio-room link clients */
  bool virtual:1;                          /* Whether client is virtual */
  bool link:1;                             /* Whether client is a studio-room link */
  bool system:1;                           /* Whether client is system (server in-process) */
  pid_t pid;                               /* process id. Not valid for system and virtual clients */
  struct room * room_ptr;                  /* Room this client belongs to. If NULL, client belongs only to studio guts. */
  struct studio * studio_ptr;              /* Studio this client belongs to. For room clients this points to studio connected to the room */
};

struct room
{
  struct list_head siblings;               /* link for studio::rooms list */
  struct list_head clients;                /* non-virtual room clients */
  struct list_head ports;                  /* ports of the room clients */
  uuid_t uuid;                             /* The UUID of the room */
  char * name;                             /* Name of the room */
  struct client * link_client_ptr;         /* client that connects the room to studio */
  struct studio * studio_ptr;              /* Studio connected to the room */
};

struct studio
{
  struct list_head all_connections;        /* All connections (studio guts and all rooms). Including superconnections. */
  struct list_head all_ports;              /* All ports (studio guts and all rooms) */
  struct list_head all_clients;            /* All clients (studio guts and all rooms) */
  struct list_head jack_connections;       /* JACK connections (studio guts and all rooms). Including superconnections, excluding virtual connections. */
  struct list_head jack_ports;             /* JACK ports (studio guts and all rooms). Excluding virtual ports. */
  struct list_head jack_clients;           /* JACK clients (studio guts and all rooms). Excluding virtual clients. */
  struct list_head rooms;                  /* Rooms connected to the studio */
  struct list_head clients;                /* studio clients (studio guts and room links) */
  struct list_head ports;                  /* studio ports (studio guts and room links) */

  bool persisted:1;             /* Studio has on-disk representation, i.e. can be reloaded from disk */
  bool modified:1;              /* Studio needs saving */
  bool jack_conf_obsolete:1;    /* JACK server was stopped during configuration retrieval */
  bool jack_conf_stable:1;      /* JACK server configuration obtained successfully */

  struct list_head jack_conf;

  object_path_t * dbus_object;
};

struct jack_parameter_variant
{
  enum
  {
    jack_byte,
    jack_boolean,
    jack_int16,
    jack_uint16,
    jack_int32,
    jack_uint32,
    jack_int64,
    jack_uint64,
    jack_doubl,
    jack_string,
  } type;

  union
  {
    unsigned char byte;
    bool boolean;
    int16_t int16;
    uint16_t uint16;
    int32_t int32;
    uint32_t uint32;
    int64_t int64;
    uint64_t uint64;
    double doubl;
    char *string;
  } value;
};

struct jack_conf_container
{
  struct list_head siblings;
  char * name;
  bool children_leafs;          /* if true, children are "jack_conf_parameter"s, if false, children are "jack_conf_container"s */
  struct list_head children;
};

struct jack_conf_parameter
{
  struct list_head siblings;
  char * name;
  struct jack_parameter_variant parameter;
};

extern DBusConnection * g_dbus_connection;
extern DBusError g_dbus_error;
extern bool g_quit;
extern struct studio * g_studio_ptr;

#define DBUS_CALL_DEFAULT_TIMEOUT 1000 // in milliseconds

#endif /* #ifndef COMMON_H__CFDC869A_31AE_4FA3_B2D3_DACA8488CA55__INCLUDED */
