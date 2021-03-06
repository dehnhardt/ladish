/* -*- Mode: C ; c-basic-offset: 2 -*- */
/*
 * LADI Session Handler (ladish)
 *
 * Copyright (C) 2010 Nedko Arnaudov <nedko@arnaudov.name>
 *
 **************************************************************************
 * This file contains definitions of well known ports
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

#ifndef WKPORTS_H__0C316912_FC11_4B34_A8DB_5F9C359ACA03__INCLUDED
#define WKPORTS_H__0C316912_FC11_4B34_A8DB_5F9C359ACA03__INCLUDED

/* 9c8ab1b7-211c-4056-bd91-94d63b3df9f2 */
UUID_DEFINE(ladish_wkclient_capture,0x9C,0x8A,0xB1,0xB7,0x21,0x1C,0x40,0x56,0xBD,0x91,0x94,0xD6,0x3B,0x3D,0xF9,0xF2);

/* e53018fe-4ae5-4d4c-b4a1-3b8f12e1ae91 */
UUID_DEFINE(ladish_wkclient_playback,0xE5,0x30,0x18,0xFE,0x4A,0xE5,0x4D,0x4C,0xB4,0xA1,0x3B,0x8F,0x12,0xE1,0xAE,0x91);

/* 2776ef6f-39e1-4c5e-8920-3deeb409c3f5 */
UUID_DEFINE(ladish_wkport_playback_left,0x27,0x76,0xEF,0x6F,0x39,0xE1,0x4C,0x5E,0x89,0x20,0x3D,0xEE,0xB4,0x09,0xC3,0xF5);

/* b371a9a1-18cb-4932-813c-daf278cf2b20 */
UUID_DEFINE(ladish_wkport_playback_right,0xB3,0x71,0xA9,0xA1,0x18,0xCB,0x49,0x32,0x81,0x3C,0xDA,0xF2,0x78,0xCF,0x2B,0x20);

/* f50862dd-3071-4727-be1c-3c9a115d2141 */
UUID_DEFINE(ladish_wkport_monitor_left,0xF5,0x08,0x62,0xDD,0x30,0x71,0x47,0x27,0xBE,0x1C,0x3C,0x9A,0x11,0x5D,0x21,0x41);

/* 35aac0d6-189d-412d-91a1-0a17212cbdb4 */
UUID_DEFINE(ladish_wkport_monitor_right,0x35,0xAA,0xC0,0xD6,0x18,0x9D,0x41,0x2D,0x91,0xA1,0x0A,0x17,0x21,0x2C,0xBD,0xB4);

/* 871954a7-7c0f-4092-ae34-465e1f1bb0ca */
UUID_DEFINE(ladish_wkport_capture_left,0x87,0x19,0x54,0xA7,0x7C,0x0F,0x40,0x92,0xAE,0x34,0x46,0x5E,0x1F,0x1B,0xB0,0xCA);

/* 2dc1da00-cebd-47ea-a239-c30db9653e7c */
UUID_DEFINE(ladish_wkport_capture_right,0x2D,0xC1,0xDA,0x00,0xCE,0xBD,0x47,0xEA,0xA2,0x39,0xC3,0x0D,0xB9,0x65,0x3E,0x7C);

/* 04f5fa90-f453-479d-8f3a-2f92cf78c604 */
UUID_DEFINE(ladish_wkport_midi_playback,0x04,0xF5,0xFA,0x90,0xF4,0x53,0x47,0x9D,0x8F,0x3A,0x2F,0x92,0xCF,0x78,0xC6,0x04);

/* abc90af1-dcc4-41b3-b3eb-d4f5a9c4f708 */
UUID_DEFINE(ladish_wkport_midi_capture,0xAB,0xC9,0x0A,0xF1,0xDC,0xC4,0x41,0xB3,0xB3,0xEB,0xD4,0xF5,0xA9,0xC4,0xF7,0x08);

/***********************************************************************************************************/

/* f3b66bdf-eabd-4c73-969e-852a8f18db60 */
UUID_DEFINE(ladish_wkport_router_audio_capture_1,0xF3,0xB6,0x6B,0xDF,0xEA,0xBD,0x4C,0x73,0x96,0x9E,0x85,0x2A,0x8F,0x18,0xDB,0x60);

/* db670a8a-c5b4-4965-a756-332fbe8dcded */
UUID_DEFINE(ladish_wkport_router_audio_playback_1,0xDB,0x67,0x0A,0x8A,0xC5,0xB4,0x49,0x65,0xA7,0x56,0x33,0x2F,0xBE,0x8D,0xCD,0xED);

/* 2d82eed7-bd61-4e76-8210-1aac23e1d769 */
UUID_DEFINE(ladish_wkport_router_audio_capture_2,0x2D,0x82,0xEE,0xD7,0xBD,0x61,0x4E,0x76,0x82,0x10,0x1A,0xAC,0x23,0xE1,0xD7,0x69);

/* 9499c01f-8150-440c-a7ca-65d451e59508 */
UUID_DEFINE(ladish_wkport_router_audio_playback_2,0x94,0x99,0xC0,0x1F,0x81,0x50,0x44,0x0C,0xA7,0xCA,0x65,0xD4,0x51,0xE5,0x95,0x08);

/* c65026bd-f6c8-4311-a00c-58d35a07f465 */
UUID_DEFINE(ladish_wkport_router_audio_capture_3,0xC6,0x50,0x26,0xBD,0xF6,0xC8,0x43,0x11,0xA0,0x0C,0x58,0xD3,0x5A,0x07,0xF4,0x65);

/* d7022565-617f-4a12-9e21-6d480768f5b5 */
UUID_DEFINE(ladish_wkport_router_audio_playback_3,0xD7,0x02,0x25,0x65,0x61,0x7F,0x4A,0x12,0x9E,0x21,0x6D,0x48,0x07,0x68,0xF5,0xB5);

/* 5d5fe203-f90f-4b90-84b8-4531ff87cd2a */
UUID_DEFINE(ladish_wkport_router_audio_capture_4,0x5D,0x5F,0xE2,0x03,0xF9,0x0F,0x4B,0x90,0x84,0xB8,0x45,0x31,0xFF,0x87,0xCD,0x2A);

/* efd3dd32-bde3-4a5c-b377-22c110d44a70 */
UUID_DEFINE(ladish_wkport_router_audio_playback_4,0xEF,0xD3,0xDD,0x32,0xBD,0xE3,0x4A,0x5C,0xB3,0x77,0x22,0xC1,0x10,0xD4,0x4A,0x70);

/* 77a4f836-bef5-4d6b-a1b2-2ba9c1c79d9b */
UUID_DEFINE(ladish_wkport_router_audio_capture_5,0x77,0xA4,0xF8,0x36,0xBE,0xF5,0x4D,0x6B,0xA1,0xB2,0x2B,0xA9,0xC1,0xC7,0x9D,0x9B);

/* f5bda842-c0fd-4326-a840-d7dc7ed8fb8b */
UUID_DEFINE(ladish_wkport_router_audio_playback_5,0xF5,0xBD,0xA8,0x42,0xC0,0xFD,0x43,0x26,0xA8,0x40,0xD7,0xDC,0x7E,0xD8,0xFB,0x8B);

/* 7d3eae69-6a81-4fad-817d-f13226bfcc37 */
UUID_DEFINE(ladish_wkport_router_audio_capture_6,0x7D,0x3E,0xAE,0x69,0x6A,0x81,0x4F,0xAD,0x81,0x7D,0xF1,0x32,0x26,0xBF,0xCC,0x37);

/* b0635568-2270-4257-8887-c0768351351c */
UUID_DEFINE(ladish_wkport_router_audio_playback_6,0xB0,0x63,0x55,0x68,0x22,0x70,0x42,0x57,0x88,0x87,0xC0,0x76,0x83,0x51,0x35,0x1C);

/* 746807b7-1bd8-406a-ae0d-1a6358d800fc */
UUID_DEFINE(ladish_wkport_router_audio_capture_7,0x74,0x68,0x07,0xB7,0x1B,0xD8,0x40,0x6A,0xAE,0x0D,0x1A,0x63,0x58,0xD8,0x00,0xFC);

/* 812d82c3-2cb6-467d-a3cd-797a28a5531f */
UUID_DEFINE(ladish_wkport_router_audio_playback_7,0x81,0x2D,0x82,0xC3,0x2C,0xB6,0x46,0x7D,0xA3,0xCD,0x79,0x7A,0x28,0xA5,0x53,0x1F);

/* 6ff10e7e-6799-4da4-818e-8ddc515daf23 */
UUID_DEFINE(ladish_wkport_router_audio_capture_8,0x6F,0xF1,0x0E,0x7E,0x67,0x99,0x4D,0xA4,0x81,0x8E,0x8D,0xDC,0x51,0x5D,0xAF,0x23);

/* 503be1d4-0fdf-495a-936f-c7882bb6362f */
UUID_DEFINE(ladish_wkport_router_audio_playback_8,0x50,0x3B,0xE1,0xD4,0x0F,0xDF,0x49,0x5A,0x93,0x6F,0xC7,0x88,0x2B,0xB6,0x36,0x2F);

/* 5932b7d3-5984-4fb0-89c0-3572f17eb6ba */
UUID_DEFINE(ladish_wkport_router_audio_capture_9,0x59,0x32,0xB7,0xD3,0x59,0x84,0x4F,0xB0,0x89,0xC0,0x35,0x72,0xF1,0x7E,0xB6,0xBA);

/* b949fb84-5d21-4d88-8a2b-e148c102fdca */
UUID_DEFINE(ladish_wkport_router_audio_playback_9,0xB9,0x49,0xFB,0x84,0x5D,0x21,0x4D,0x88,0x8A,0x2B,0xE1,0x48,0xC1,0x02,0xFD,0xCA);

/* 2afa7b92-3edb-44b2-9739-b66a920934cc */
UUID_DEFINE(ladish_wkport_router_audio_capture_10,0x2A,0xFA,0x7B,0x92,0x3E,0xDB,0x44,0xB2,0x97,0x39,0xB6,0x6A,0x92,0x09,0x34,0xCC);

/* 608dcbd5-a838-46f0-9be9-1d94a4c5a15e */
UUID_DEFINE(ladish_wkport_router_audio_playback_10,0x60,0x8D,0xCB,0xD5,0xA8,0x38,0x46,0xF0,0x9B,0xE9,0x1D,0x94,0xA4,0xC5,0xA1,0x5E);

/* 84e7cb90-3071-43d1-9d7c-05446e673719 */
UUID_DEFINE(ladish_wkport_router_audio_capture_11,0x84,0xE7,0xCB,0x90,0x30,0x71,0x43,0xD1,0x9D,0x7C,0x05,0x44,0x6E,0x67,0x37,0x19);

/* de58fe12-2f0a-4192-ac62-7b5d5b42af43 */
UUID_DEFINE(ladish_wkport_router_audio_playback_11,0xDE,0x58,0xFE,0x12,0x2F,0x0A,0x41,0x92,0xAC,0x62,0x7B,0x5D,0x5B,0x42,0xAF,0x43);

/* 1b8ca7d9-0a8c-4a59-9d9f-ad035fe6dc24 */
UUID_DEFINE(ladish_wkport_router_audio_capture_12,0x1B,0x8C,0xA7,0xD9,0x0A,0x8C,0x4A,0x59,0x9D,0x9F,0xAD,0x03,0x5F,0xE6,0xDC,0x24);

/* 49b1893d-e7f0-445d-b3e8-303737bb6ddc */
UUID_DEFINE(ladish_wkport_router_audio_playback_12,0x49,0xB1,0x89,0x3D,0xE7,0xF0,0x44,0x5D,0xB3,0xE8,0x30,0x37,0x37,0xBB,0x6D,0xDC);

/* 269bec3f-94c3-4559-a423-6671a13bf02a */
UUID_DEFINE(ladish_wkport_router_audio_capture_13,0x26,0x9B,0xEC,0x3F,0x94,0xC3,0x45,0x59,0xA4,0x23,0x66,0x71,0xA1,0x3B,0xF0,0x2A);

/* ddd0d6f8-92f2-4c5c-b44e-5cd0139e473b */
UUID_DEFINE(ladish_wkport_router_audio_playback_13,0xDD,0xD0,0xD6,0xF8,0x92,0xF2,0x4C,0x5C,0xB4,0x4E,0x5C,0xD0,0x13,0x9E,0x47,0x3B);

/* 06d89551-1dd7-4d8e-b0fb-f49be103d992 */
UUID_DEFINE(ladish_wkport_router_audio_capture_14,0x06,0xD8,0x95,0x51,0x1D,0xD7,0x4D,0x8E,0xB0,0xFB,0xF4,0x9B,0xE1,0x03,0xD9,0x92);

/* 602930a7-f3bd-427d-9545-181e6f36f622 */
UUID_DEFINE(ladish_wkport_router_audio_playback_14,0x60,0x29,0x30,0xA7,0xF3,0xBD,0x42,0x7D,0x95,0x45,0x18,0x1E,0x6F,0x36,0xF6,0x22);

/* c9f091e2-3f03-46b0-9a80-6aaba33899c5 */
UUID_DEFINE(ladish_wkport_router_audio_capture_15,0xC9,0xF0,0x91,0xE2,0x3F,0x03,0x46,0xB0,0x9A,0x80,0x6A,0xAB,0xA3,0x38,0x99,0xC5);

/* 4c4440a5-7759-4653-bd81-ef8b7baaeeab */
UUID_DEFINE(ladish_wkport_router_audio_playback_15,0x4C,0x44,0x40,0xA5,0x77,0x59,0x46,0x53,0xBD,0x81,0xEF,0x8B,0x7B,0xAA,0xEE,0xAB);

/* 7048d21f-7d69-4135-aba6-2e0242ac46cc */
UUID_DEFINE(ladish_wkport_router_audio_capture_16,0x70,0x48,0xD2,0x1F,0x7D,0x69,0x41,0x35,0xAB,0xA6,0x2E,0x02,0x42,0xAC,0x46,0xCC);

/* 0c603700-6f79-495a-b3e8-26ab8dab7c61 */
UUID_DEFINE(ladish_wkport_router_audio_playback_16,0x0C,0x60,0x37,0x00,0x6F,0x79,0x49,0x5A,0xB3,0xE8,0x26,0xAB,0x8D,0xAB,0x7C,0x61);

/* 1f74118e-8b25-4a4f-830a-2b0e90f31dd8 */
UUID_DEFINE(ladish_wkport_router_audio_capture_17,0x1F,0x74,0x11,0x8E,0x8B,0x25,0x4A,0x4F,0x83,0x0A,0x2B,0x0E,0x90,0xF3,0x1D,0xD8);

/* e2dd8278-c5be-4756-89a1-05b78e663d6e */
UUID_DEFINE(ladish_wkport_router_audio_playback_17,0xE2,0xDD,0x82,0x78,0xC5,0xBE,0x47,0x56,0x89,0xA1,0x05,0xB7,0x8E,0x66,0x3D,0x6E);

/* cef3f257-1e21-4e6a-b71a-6740b4e531da */
UUID_DEFINE(ladish_wkport_router_audio_capture_18,0xCE,0xF3,0xF2,0x57,0x1E,0x21,0x4E,0x6A,0xB7,0x1A,0x67,0x40,0xB4,0xE5,0x31,0xDA);

/* 666bd8a0-244b-4c02-a69b-b3bac9b33c14 */
UUID_DEFINE(ladish_wkport_router_audio_playback_18,0x66,0x6B,0xD8,0xA0,0x24,0x4B,0x4C,0x02,0xA6,0x9B,0xB3,0xBA,0xC9,0xB3,0x3C,0x14);

/* 1b147188-3758-4208-8987-4b1a16eadadb */
UUID_DEFINE(ladish_wkport_router_audio_capture_19,0x1B,0x14,0x71,0x88,0x37,0x58,0x42,0x08,0x89,0x87,0x4B,0x1A,0x16,0xEA,0xDA,0xDB);

/* 8da74f51-c3d7-4bd6-b5dd-d23fbc284379 */
UUID_DEFINE(ladish_wkport_router_audio_playback_19,0x8D,0xA7,0x4F,0x51,0xC3,0xD7,0x4B,0xD6,0xB5,0xDD,0xD2,0x3F,0xBC,0x28,0x43,0x79);

/* 0054ac57-383b-4dc9-9af6-d7ba94e3c78e */
UUID_DEFINE(ladish_wkport_router_audio_capture_20,0x00,0x54,0xAC,0x57,0x38,0x3B,0x4D,0xC9,0x9A,0xF6,0xD7,0xBA,0x94,0xE3,0xC7,0x8E);

/* 07c57b44-10b1-42cc-8454-0421892c5469 */
UUID_DEFINE(ladish_wkport_router_audio_playback_20,0x07,0xC5,0x7B,0x44,0x10,0xB1,0x42,0xCC,0x84,0x54,0x04,0x21,0x89,0x2C,0x54,0x69);

/* 51b0e5e1-cc1f-4e01-bb29-4db4cb2b6134 */
UUID_DEFINE(ladish_wkport_router_audio_capture_21,0x51,0xB0,0xE5,0xE1,0xCC,0x1F,0x4E,0x01,0xBB,0x29,0x4D,0xB4,0xCB,0x2B,0x61,0x34);

/* 800e353b-b70d-4b27-9c9a-9c253ef110ab */
UUID_DEFINE(ladish_wkport_router_audio_playback_21,0x80,0x0E,0x35,0x3B,0xB7,0x0D,0x4B,0x27,0x9C,0x9A,0x9C,0x25,0x3E,0xF1,0x10,0xAB);

/* d8a6c2a7-489d-4fb0-91c7-b7a0ba834a47 */
UUID_DEFINE(ladish_wkport_router_audio_capture_22,0xD8,0xA6,0xC2,0xA7,0x48,0x9D,0x4F,0xB0,0x91,0xC7,0xB7,0xA0,0xBA,0x83,0x4A,0x47);

/* f09e02bd-16a2-43a6-8e8c-f0a42400122f */
UUID_DEFINE(ladish_wkport_router_audio_playback_22,0xF0,0x9E,0x02,0xBD,0x16,0xA2,0x43,0xA6,0x8E,0x8C,0xF0,0xA4,0x24,0x00,0x12,0x2F);

/* 041c9c7f-0cdb-46d5-ac72-d61d21a93007 */
UUID_DEFINE(ladish_wkport_router_audio_capture_23,0x04,0x1C,0x9C,0x7F,0x0C,0xDB,0x46,0xD5,0xAC,0x72,0xD6,0x1D,0x21,0xA9,0x30,0x07);

/* e86e3b43-44e1-4ceb-9428-8b402a32f508 */
UUID_DEFINE(ladish_wkport_router_audio_playback_23,0xE8,0x6E,0x3B,0x43,0x44,0xE1,0x4C,0xEB,0x94,0x28,0x8B,0x40,0x2A,0x32,0xF5,0x08);

/* 2918f9c1-fb67-455f-83a2-fa634cf0a9f4 */
UUID_DEFINE(ladish_wkport_router_audio_capture_24,0x29,0x18,0xF9,0xC1,0xFB,0x67,0x45,0x5F,0x83,0xA2,0xFA,0x63,0x4C,0xF0,0xA9,0xF4);

/* 7855dbb3-4c08-46dc-9e13-ebe7d96621b2 */
UUID_DEFINE(ladish_wkport_router_audio_playback_24,0x78,0x55,0xDB,0xB3,0x4C,0x08,0x46,0xDC,0x9E,0x13,0xEB,0xE7,0xD9,0x66,0x21,0xB2);

/* 3ecdf586-4799-411b-8f21-50d5f6ff7488 */
UUID_DEFINE(ladish_wkport_router_audio_capture_25,0x3E,0xCD,0xF5,0x86,0x47,0x99,0x41,0x1B,0x8F,0x21,0x50,0xD5,0xF6,0xFF,0x74,0x88);

/* 73d665a6-039f-4ac7-b5fb-629b679a31e5 */
UUID_DEFINE(ladish_wkport_router_audio_playback_25,0x73,0xD6,0x65,0xA6,0x03,0x9F,0x4A,0xC7,0xB5,0xFB,0x62,0x9B,0x67,0x9A,0x31,0xE5);

/* b979a4ea-b6e0-4ced-b637-688444ed9ffe */
UUID_DEFINE(ladish_wkport_router_audio_capture_26,0xB9,0x79,0xA4,0xEA,0xB6,0xE0,0x4C,0xED,0xB6,0x37,0x68,0x84,0x44,0xED,0x9F,0xFE);

/* fee004ff-34fc-42ba-a25a-0f04f2e2436f */
UUID_DEFINE(ladish_wkport_router_audio_playback_26,0xFE,0xE0,0x04,0xFF,0x34,0xFC,0x42,0xBA,0xA2,0x5A,0x0F,0x04,0xF2,0xE2,0x43,0x6F);

/* ff413bee-5296-43c8-a66c-078ccff60ec8 */
UUID_DEFINE(ladish_wkport_router_audio_capture_27,0xFF,0x41,0x3B,0xEE,0x52,0x96,0x43,0xC8,0xA6,0x6C,0x07,0x8C,0xCF,0xF6,0x0E,0xC8);

/* 260ed9e7-b07b-47d5-bcfd-6ae9f5f67365 */
UUID_DEFINE(ladish_wkport_router_audio_playback_27,0x26,0x0E,0xD9,0xE7,0xB0,0x7B,0x47,0xD5,0xBC,0xFD,0x6A,0xE9,0xF5,0xF6,0x73,0x65);

/* f64e52f1-4709-42b4-a20a-1f09e2582be1 */
UUID_DEFINE(ladish_wkport_router_audio_capture_28,0xF6,0x4E,0x52,0xF1,0x47,0x09,0x42,0xB4,0xA2,0x0A,0x1F,0x09,0xE2,0x58,0x2B,0xE1);

/* 83e79c26-3322-47b0-8acf-98c9f8b28a80 */
UUID_DEFINE(ladish_wkport_router_audio_playback_28,0x83,0xE7,0x9C,0x26,0x33,0x22,0x47,0xB0,0x8A,0xCF,0x98,0xC9,0xF8,0xB2,0x8A,0x80);

/* 39d7a03e-293e-43a9-a940-ed0b77044151 */
UUID_DEFINE(ladish_wkport_router_audio_capture_29,0x39,0xD7,0xA0,0x3E,0x29,0x3E,0x43,0xA9,0xA9,0x40,0xED,0x0B,0x77,0x04,0x41,0x51);

/* c60cbee6-d012-49fe-afba-f208661e1b43 */
UUID_DEFINE(ladish_wkport_router_audio_playback_29,0xC6,0x0C,0xBE,0xE6,0xD0,0x12,0x49,0xFE,0xAF,0xBA,0xF2,0x08,0x66,0x1E,0x1B,0x43);

/* 875bdc36-7869-4c99-8aaf-687669eddd7e */
UUID_DEFINE(ladish_wkport_router_audio_capture_30,0x87,0x5B,0xDC,0x36,0x78,0x69,0x4C,0x99,0x8A,0xAF,0x68,0x76,0x69,0xED,0xDD,0x7E);

/* 1b85c406-fa85-4037-a291-0d90d4839f62 */
UUID_DEFINE(ladish_wkport_router_audio_playback_30,0x1B,0x85,0xC4,0x06,0xFA,0x85,0x40,0x37,0xA2,0x91,0x0D,0x90,0xD4,0x83,0x9F,0x62);

/* 7d9118a6-922a-4564-b4e2-9d1e13e17580 */
UUID_DEFINE(ladish_wkport_router_audio_capture_31,0x7D,0x91,0x18,0xA6,0x92,0x2A,0x45,0x64,0xB4,0xE2,0x9D,0x1E,0x13,0xE1,0x75,0x80);

/* 1dff6fbe-f4e6-40ba-b186-2e058ef81d98 */
UUID_DEFINE(ladish_wkport_router_audio_playback_31,0x1D,0xFF,0x6F,0xBE,0xF4,0xE6,0x40,0xBA,0xB1,0x86,0x2E,0x05,0x8E,0xF8,0x1D,0x98);

/* c0f6c88e-04d0-4014-96ff-1f2f920ce84f */
UUID_DEFINE(ladish_wkport_router_audio_capture_32,0xC0,0xF6,0xC8,0x8E,0x04,0xD0,0x40,0x14,0x96,0xFF,0x1F,0x2F,0x92,0x0C,0xE8,0x4F);

/* 760226e0-a413-40e1-b2ca-7ffdad967a5e */
UUID_DEFINE(ladish_wkport_router_audio_playback_32,0x76,0x02,0x26,0xE0,0xA4,0x13,0x40,0xE1,0xB2,0xCA,0x7F,0xFD,0xAD,0x96,0x7A,0x5E);

/* 439d4a29-6962-4284-bb93-90f1c122a3b6 */
UUID_DEFINE(ladish_wkport_router_audio_capture_33,0x43,0x9D,0x4A,0x29,0x69,0x62,0x42,0x84,0xBB,0x93,0x90,0xF1,0xC1,0x22,0xA3,0xB6);

/* 9701f764-8bd1-4aa2-8bb7-e859a741424b */
UUID_DEFINE(ladish_wkport_router_audio_playback_33,0x97,0x01,0xF7,0x64,0x8B,0xD1,0x4A,0xA2,0x8B,0xB7,0xE8,0x59,0xA7,0x41,0x42,0x4B);

/* d8131770-7773-4879-b61e-2e8d8ad202ef */
UUID_DEFINE(ladish_wkport_router_audio_capture_34,0xD8,0x13,0x17,0x70,0x77,0x73,0x48,0x79,0xB6,0x1E,0x2E,0x8D,0x8A,0xD2,0x02,0xEF);

/* 5b90657a-d3ce-4f90-b913-4659535ada3b */
UUID_DEFINE(ladish_wkport_router_audio_playback_34,0x5B,0x90,0x65,0x7A,0xD3,0xCE,0x4F,0x90,0xB9,0x13,0x46,0x59,0x53,0x5A,0xDA,0x3B);

/* 29d4819e-528e-4a5c-af70-64982ce97a08 */
UUID_DEFINE(ladish_wkport_router_audio_capture_35,0x29,0xD4,0x81,0x9E,0x52,0x8E,0x4A,0x5C,0xAF,0x70,0x64,0x98,0x2C,0xE9,0x7A,0x08);

/* ba837ec7-e1fe-40d2-95a0-f3163b318156 */
UUID_DEFINE(ladish_wkport_router_audio_playback_35,0xBA,0x83,0x7E,0xC7,0xE1,0xFE,0x40,0xD2,0x95,0xA0,0xF3,0x16,0x3B,0x31,0x81,0x56);

/* f00abb59-87ef-48be-b9b2-d4866a905666 */
UUID_DEFINE(ladish_wkport_router_audio_capture_36,0xF0,0x0A,0xBB,0x59,0x87,0xEF,0x48,0xBE,0xB9,0xB2,0xD4,0x86,0x6A,0x90,0x56,0x66);

/* 972b9863-8a9a-4fc8-860c-ddc4236e3db7 */
UUID_DEFINE(ladish_wkport_router_audio_playback_36,0x97,0x2B,0x98,0x63,0x8A,0x9A,0x4F,0xC8,0x86,0x0C,0xDD,0xC4,0x23,0x6E,0x3D,0xB7);

/* 1393b552-da4d-41cb-8f0d-fa5392b6df9d */
UUID_DEFINE(ladish_wkport_router_audio_capture_37,0x13,0x93,0xB5,0x52,0xDA,0x4D,0x41,0xCB,0x8F,0x0D,0xFA,0x53,0x92,0xB6,0xDF,0x9D);

/* b106062e-48fd-44f1-ac9d-050a23dbc74f */
UUID_DEFINE(ladish_wkport_router_audio_playback_37,0xB1,0x06,0x06,0x2E,0x48,0xFD,0x44,0xF1,0xAC,0x9D,0x05,0x0A,0x23,0xDB,0xC7,0x4F);

/* e9a7618c-8c55-41b8-a57b-37546569a0ed */
UUID_DEFINE(ladish_wkport_router_audio_capture_38,0xE9,0xA7,0x61,0x8C,0x8C,0x55,0x41,0xB8,0xA5,0x7B,0x37,0x54,0x65,0x69,0xA0,0xED);

/* 3d183a27-13fe-4895-be80-9f7edd9d6f89 */
UUID_DEFINE(ladish_wkport_router_audio_playback_38,0x3D,0x18,0x3A,0x27,0x13,0xFE,0x48,0x95,0xBE,0x80,0x9F,0x7E,0xDD,0x9D,0x6F,0x89);

/* 9945f68d-a9b8-4680-81c1-049d36dc4c51 */
UUID_DEFINE(ladish_wkport_router_audio_capture_39,0x99,0x45,0xF6,0x8D,0xA9,0xB8,0x46,0x80,0x81,0xC1,0x04,0x9D,0x36,0xDC,0x4C,0x51);

/* ee192c89-a836-4bf3-aa21-678af3a315c9 */
UUID_DEFINE(ladish_wkport_router_audio_playback_39,0xEE,0x19,0x2C,0x89,0xA8,0x36,0x4B,0xF3,0xAA,0x21,0x67,0x8A,0xF3,0xA3,0x15,0xC9);

/* 95b5adc5-b16f-4dd1-999c-40da0cd0d36d */
UUID_DEFINE(ladish_wkport_router_audio_capture_40,0x95,0xB5,0xAD,0xC5,0xB1,0x6F,0x4D,0xD1,0x99,0x9C,0x40,0xDA,0x0C,0xD0,0xD3,0x6D);

/* 954ee5f1-68a6-422a-a220-33731b6818c3 */
UUID_DEFINE(ladish_wkport_router_audio_playback_40,0x95,0x4E,0xE5,0xF1,0x68,0xA6,0x42,0x2A,0xA2,0x20,0x33,0x73,0x1B,0x68,0x18,0xC3);

/* b8c4c2c6-d44b-4f98-a691-872571025587 */
UUID_DEFINE(ladish_wkport_router_midi_capture_1,0xB8,0xC4,0xC2,0xC6,0xD4,0x4B,0x4F,0x98,0xA6,0x91,0x87,0x25,0x71,0x02,0x55,0x87);

/* cb439a96-74e6-4c60-8105-4fc35d33b9d5 */
UUID_DEFINE(ladish_wkport_router_midi_playback_1,0xCB,0x43,0x9A,0x96,0x74,0xE6,0x4C,0x60,0x81,0x05,0x4F,0xC3,0x5D,0x33,0xB9,0xD5);

/* 802b3e39-b717-4c8f-9190-99b04b6e7d16 */
UUID_DEFINE(ladish_wkport_router_midi_capture_2,0x80,0x2B,0x3E,0x39,0xB7,0x17,0x4C,0x8F,0x91,0x90,0x99,0xB0,0x4B,0x6E,0x7D,0x16);

/* 21f2812b-80e7-4fb7-b403-3ae5585854c0 */
UUID_DEFINE(ladish_wkport_router_midi_playback_2,0x21,0xF2,0x81,0x2B,0x80,0xE7,0x4F,0xB7,0xB4,0x03,0x3A,0xE5,0x58,0x58,0x54,0xC0);

/* c55508d0-91d2-4f01-9e21-f19a10a2f395 */
UUID_DEFINE(ladish_wkport_router_midi_capture_3,0xC5,0x55,0x08,0xD0,0x91,0xD2,0x4F,0x01,0x9E,0x21,0xF1,0x9A,0x10,0xA2,0xF3,0x95);

/* 6af721a5-9516-4cac-836b-90e471d2f54a */
UUID_DEFINE(ladish_wkport_router_midi_playback_3,0x6A,0xF7,0x21,0xA5,0x95,0x16,0x4C,0xAC,0x83,0x6B,0x90,0xE4,0x71,0xD2,0xF5,0x4A);

/* 58fcbad1-d5c5-48a9-9b35-897010d7ec3f */
UUID_DEFINE(ladish_wkport_router_midi_capture_4,0x58,0xFC,0xBA,0xD1,0xD5,0xC5,0x48,0xA9,0x9B,0x35,0x89,0x70,0x10,0xD7,0xEC,0x3F);

/* d624325f-e793-4f74-b7cc-ce7c30bd76a3 */
UUID_DEFINE(ladish_wkport_router_midi_playback_4,0xD6,0x24,0x32,0x5F,0xE7,0x93,0x4F,0x74,0xB7,0xCC,0xCE,0x7C,0x30,0xBD,0x76,0xA3);

/* b42fad3c-808c-47d1-baeb-00acc6213e0b */
UUID_DEFINE(ladish_wkport_router_midi_capture_5,0xB4,0x2F,0xAD,0x3C,0x80,0x8C,0x47,0xD1,0xBA,0xEB,0x00,0xAC,0xC6,0x21,0x3E,0x0B);

/* 3ae0d054-7447-4178-8151-2d71a2146a6e */
UUID_DEFINE(ladish_wkport_router_midi_playback_5,0x3A,0xE0,0xD0,0x54,0x74,0x47,0x41,0x78,0x81,0x51,0x2D,0x71,0xA2,0x14,0x6A,0x6E);

/* 75f46716-a02f-4ec6-b759-5becb7e633d8 */
UUID_DEFINE(ladish_wkport_router_midi_capture_6,0x75,0xF4,0x67,0x16,0xA0,0x2F,0x4E,0xC6,0xB7,0x59,0x5B,0xEC,0xB7,0xE6,0x33,0xD8);

/* cad05f8c-b881-48ac-b0f8-d52f277063f3 */
UUID_DEFINE(ladish_wkport_router_midi_playback_6,0xCA,0xD0,0x5F,0x8C,0xB8,0x81,0x48,0xAC,0xB0,0xF8,0xD5,0x2F,0x27,0x70,0x63,0xF3);

/* 77d3b0ed-9e2a-4797-8a3a-a33d4e9aa9cc */
UUID_DEFINE(ladish_wkport_router_midi_capture_7,0x77,0xD3,0xB0,0xED,0x9E,0x2A,0x47,0x97,0x8A,0x3A,0xA3,0x3D,0x4E,0x9A,0xA9,0xCC);

/* 98d5e0d8-8fbe-432b-8ba1-63cb864b3ca6 */
UUID_DEFINE(ladish_wkport_router_midi_playback_7,0x98,0xD5,0xE0,0xD8,0x8F,0xBE,0x43,0x2B,0x8B,0xA1,0x63,0xCB,0x86,0x4B,0x3C,0xA6);

/* b9eb2300-dffc-4883-aedd-741f6fa64c6a */
UUID_DEFINE(ladish_wkport_router_midi_capture_8,0xB9,0xEB,0x23,0x00,0xDF,0xFC,0x48,0x83,0xAE,0xDD,0x74,0x1F,0x6F,0xA6,0x4C,0x6A);

/* 18b1c1d9-4129-410d-b8d4-8bef34f7c52b */
UUID_DEFINE(ladish_wkport_router_midi_playback_8,0x18,0xB1,0xC1,0xD9,0x41,0x29,0x41,0x0D,0xB8,0xD4,0x8B,0xEF,0x34,0xF7,0xC5,0x2B);

/* 6752d59d-435d-4bcc-bb7f-544b90671a4e */
UUID_DEFINE(ladish_wkport_router_midi_capture_9,0x67,0x52,0xD5,0x9D,0x43,0x5D,0x4B,0xCC,0xBB,0x7F,0x54,0x4B,0x90,0x67,0x1A,0x4E);

/* 166182c8-a9be-4c6d-aeab-c8edbc899676 */
UUID_DEFINE(ladish_wkport_router_midi_playback_9,0x16,0x61,0x82,0xC8,0xA9,0xBE,0x4C,0x6D,0xAE,0xAB,0xC8,0xED,0xBC,0x89,0x96,0x76);

/* 641980be-fe55-4017-a3dd-825e343f5f41 */
UUID_DEFINE(ladish_wkport_router_midi_capture_10,0x64,0x19,0x80,0xBE,0xFE,0x55,0x40,0x17,0xA3,0xDD,0x82,0x5E,0x34,0x3F,0x5F,0x41);

/* 0fede96e-88fe-4682-84bf-daaa4e583f39 */
UUID_DEFINE(ladish_wkport_router_midi_playback_10,0x0F,0xED,0xE9,0x6E,0x88,0xFE,0x46,0x82,0x84,0xBF,0xDA,0xAA,0x4E,0x58,0x3F,0x39);

/* cc5ab023-be24-4767-9b62-a1e465f8598d */
UUID_DEFINE(ladish_wkport_router_midi_capture_11,0xCC,0x5A,0xB0,0x23,0xBE,0x24,0x47,0x67,0x9B,0x62,0xA1,0xE4,0x65,0xF8,0x59,0x8D);

/* 6bad9e47-3ff5-45b4-aad5-af0952fbfc69 */
UUID_DEFINE(ladish_wkport_router_midi_playback_11,0x6B,0xAD,0x9E,0x47,0x3F,0xF5,0x45,0xB4,0xAA,0xD5,0xAF,0x09,0x52,0xFB,0xFC,0x69);

/* ed9be8d7-7b66-45c4-93fe-8d929e1e5ac3 */
UUID_DEFINE(ladish_wkport_router_midi_capture_12,0xED,0x9B,0xE8,0xD7,0x7B,0x66,0x45,0xC4,0x93,0xFE,0x8D,0x92,0x9E,0x1E,0x5A,0xC3);

/* 407a8d1c-6c04-4f0f-bc6b-81e852ec3470 */
UUID_DEFINE(ladish_wkport_router_midi_playback_12,0x40,0x7A,0x8D,0x1C,0x6C,0x04,0x4F,0x0F,0xBC,0x6B,0x81,0xE8,0x52,0xEC,0x34,0x70);

/* ae0c0764-02ac-4ff7-8d4d-3fe7e30694c3 */
UUID_DEFINE(ladish_wkport_router_midi_capture_13,0xAE,0x0C,0x07,0x64,0x02,0xAC,0x4F,0xF7,0x8D,0x4D,0x3F,0xE7,0xE3,0x06,0x94,0xC3);

/* e3909875-9cf4-45d9-a683-11625aa1e49c */
UUID_DEFINE(ladish_wkport_router_midi_playback_13,0xE3,0x90,0x98,0x75,0x9C,0xF4,0x45,0xD9,0xA6,0x83,0x11,0x62,0x5A,0xA1,0xE4,0x9C);

/* 990746d8-e964-48e4-85c4-48c92afb3383 */
UUID_DEFINE(ladish_wkport_router_midi_capture_14,0x99,0x07,0x46,0xD8,0xE9,0x64,0x48,0xE4,0x85,0xC4,0x48,0xC9,0x2A,0xFB,0x33,0x83);

/* d74b31b7-dc75-4583-8077-fe53b86806d8 */
UUID_DEFINE(ladish_wkport_router_midi_playback_14,0xD7,0x4B,0x31,0xB7,0xDC,0x75,0x45,0x83,0x80,0x77,0xFE,0x53,0xB8,0x68,0x06,0xD8);

/* e460fe94-5124-4538-9eee-a635688e36d9 */
UUID_DEFINE(ladish_wkport_router_midi_capture_15,0xE4,0x60,0xFE,0x94,0x51,0x24,0x45,0x38,0x9E,0xEE,0xA6,0x35,0x68,0x8E,0x36,0xD9);

/* 336be91f-4b19-422e-9f7b-21cd396f1178 */
UUID_DEFINE(ladish_wkport_router_midi_playback_15,0x33,0x6B,0xE9,0x1F,0x4B,0x19,0x42,0x2E,0x9F,0x7B,0x21,0xCD,0x39,0x6F,0x11,0x78);

/* f2043b67-d0c9-4757-b796-75c31e67be91 */
UUID_DEFINE(ladish_wkport_router_midi_capture_16,0xF2,0x04,0x3B,0x67,0xD0,0xC9,0x47,0x57,0xB7,0x96,0x75,0xC3,0x1E,0x67,0xBE,0x91);

/* eb9d6a59-0fe1-4d01-b7a8-5af6edccda22 */
UUID_DEFINE(ladish_wkport_router_midi_playback_16,0xEB,0x9D,0x6A,0x59,0x0F,0xE1,0x4D,0x01,0xB7,0xA8,0x5A,0xF6,0xED,0xCC,0xDA,0x22);

#endif /* #ifndef WKPORTS_H__0C316912_FC11_4B34_A8DB_5F9C359ACA03__INCLUDED */
