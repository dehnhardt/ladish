/* -*- Mode: C ; c-basic-offset: 2 -*- */
/*
 * LADI Session Handler (ladish)
 *
 * Copyright (C) 2009 Nedko Arnaudov <nedko@arnaudov.name>
 *
 **************************************************************************
 * This file contains implementation graph object that is backed through D-Bus
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

#include "common.h"
#include "graph.h"
#include "../common/klist.h"

struct monitor
{
  struct list_head siblings;
  void * context;
  void (* clear)(void * context);
  void (* client_appeared)(void * context, uint64_t id, const char * name);
  void (* client_disappeared)(void * context, uint64_t id);
  void (* port_sappeared)(void * context, uint64_t client_id, uint64_t port_id, const char * port_name, bool is_input, bool is_terminal, bool is_midi);
  void (* port_disappeared)(void * context, uint64_t client_id, uint64_t port_id);
  void (* ports_connected)(void * context, uint64_t client1_id, uint64_t port1_id, uint64_t client2_id, uint64_t port2_id);
  void (* ports_disconnected)(void * context, uint64_t client1_id, uint64_t port1_id, uint64_t client2_id, uint64_t port2_id);
};

struct graph
{
  struct list_head monitors;
};

bool
graph_create(
  const char * service,
  const char * object,
  graph_handle * graph_ptr)
{
  return false;
}

void
graph_destroy(
  graph_handle graph)
{
}

void
graph_attach(
  graph_handle graph,
  void * context,
  void (* clear)(void * context),
  void (* client_appeared)(void * context, uint64_t id, const char * name),
  void (* client_disappeared)(void * context, uint64_t id),
  void (* port_sappeared)(void * context, uint64_t client_id, uint64_t port_id, const char * port_name, bool is_input, bool is_terminal, bool is_midi),
  void (* port_disappeared)(void * context, uint64_t client_id, uint64_t port_id),
  void (* ports_connected)(void * context, uint64_t client1_id, uint64_t port1_id, uint64_t client2_id, uint64_t port2_id),
  void (* ports_disconnected)(void * context, uint64_t client1_id, uint64_t port1_id, uint64_t client2_id, uint64_t port2_id))
{
}

void
graph_detach(
  graph_handle graph,
  void * context)
{
}

void
graph_connect_ports(
  graph_handle graph,
  uint64_t port1_id,
  uint64_t port2_id)
{
}

void
graph_disconnect_ports(
  graph_handle graph,
  uint64_t port1_id,
  uint64_t port2_id)
{
}