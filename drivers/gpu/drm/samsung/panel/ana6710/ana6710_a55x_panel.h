/*
 * linux/drivers/video/fbdev/exynos/panel/ana6710/ana6710_a55x_panel.h
 *
 * Header file for ANA6710 Dimming Driver
 *
 * Copyright (c) 2016 Samsung Electronics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ANA6710_A55X_PANEL_H__
#define __ANA6710_A55X_PANEL_H__

#include "../panel.h"
#include "../panel_drv.h"
#include "oled_function.h"
#include "ana6710.h"
#include "ana6710_a55x.h"
#include "ana6710_dimming.h"
#ifdef CONFIG_USDM_MDNIE
#include "ana6710_a55x_panel_mdnie.h"
#endif
#include "ana6710_a55x_panel_dimming.h"
#ifdef CONFIG_USDM_PANEL_AOD_BL
#include "ana6710_a55x_panel_aod_dimming.h"
#endif
#include "ana6710_a55x_resol.h"

#ifdef CONFIG_USDM_PANEL_RCD
#include "ana6710_a55x_rcd.h"
#endif

#undef __pn_name__
#define __pn_name__	a55x

#undef __PN_NAME__
#define __PN_NAME__

/* ===================================================================================== */
/* ============================= [ANA6710 READ INFO TABLE] ============================= */
/* ===================================================================================== */
/* <READINFO TABLE> IS DEPENDENT ON LDI. IF YOU NEED, DEFINE PANEL's RESOURCE TABLE */


/* ===================================================================================== */
/* ============================= [ANA6710 RESOURCE TABLE] ============================== */
/* ===================================================================================== */
/* <RESOURCE TABLE> IS DEPENDENT ON LDI. IF YOU NEED, DEFINE PANEL's RESOURCE TABLE */


/* ===================================================================================== */
/* ============================== [ANA6710 MAPPING TABLE] ============================== */
/* ===================================================================================== */

static u8 a55x_brt_table[ANA6710_TOTAL_STEP][2] = {
        { 0x00, 0x04 }, { 0x00, 0x06 }, { 0x00, 0x08 }, { 0x00, 0x0A }, { 0x00, 0x0D },
        { 0x00, 0x10 }, { 0x00, 0x14 }, { 0x00, 0x17 }, { 0x00, 0x1B }, { 0x00, 0x1E },
        { 0x00, 0x22 }, { 0x00, 0x26 }, { 0x00, 0x2A }, { 0x00, 0x2F }, { 0x00, 0x33 },
        { 0x00, 0x37 }, { 0x00, 0x3C }, { 0x00, 0x41 }, { 0x00, 0x45 }, { 0x00, 0x4A },
        { 0x00, 0x4F }, { 0x00, 0x54 }, { 0x00, 0x59 }, { 0x00, 0x5E }, { 0x00, 0x63 },
        { 0x00, 0x68 }, { 0x00, 0x6D }, { 0x00, 0x72 }, { 0x00, 0x78 }, { 0x00, 0x7D },
        { 0x00, 0x83 }, { 0x00, 0x88 }, { 0x00, 0x8E }, { 0x00, 0x93 }, { 0x00, 0x99 },
        { 0x00, 0x9F }, { 0x00, 0xA5 }, { 0x00, 0xAA }, { 0x00, 0xB0 }, { 0x00, 0xB6 },
        { 0x00, 0xBC }, { 0x00, 0xC2 }, { 0x00, 0xC8 }, { 0x00, 0xCE }, { 0x00, 0xD4 },
        { 0x00, 0xDB }, { 0x00, 0xE1 }, { 0x00, 0xE7 }, { 0x00, 0xED }, { 0x00, 0xF4 },
        { 0x00, 0xF6 }, { 0x01, 0x01 }, { 0x01, 0x07 }, { 0x01, 0x0E }, { 0x01, 0x14 },
        { 0x01, 0x1B }, { 0x01, 0x21 }, { 0x01, 0x28 }, { 0x01, 0x2F }, { 0x01, 0x35 },
        { 0x01, 0x3C }, { 0x01, 0x43 }, { 0x01, 0x4A }, { 0x01, 0x50 }, { 0x01, 0x57 },
        { 0x01, 0x5E }, { 0x01, 0x65 }, { 0x01, 0x6C }, { 0x01, 0x73 }, { 0x01, 0x7A },
        { 0x01, 0x81 }, { 0x01, 0x88 }, { 0x01, 0x8F }, { 0x01, 0x96 }, { 0x01, 0x9E },
        { 0x01, 0xA5 }, { 0x01, 0xAC }, { 0x01, 0xB3 }, { 0x01, 0xBB }, { 0x01, 0xC2 },
        { 0x01, 0xC9 }, { 0x01, 0xD1 }, { 0x01, 0xD8 }, { 0x01, 0xE0 }, { 0x01, 0xE7 },
        { 0x01, 0xEE }, { 0x01, 0xF6 }, { 0x01, 0xFE }, { 0x02, 0x05 }, { 0x02, 0x0D },
        { 0x02, 0x14 }, { 0x02, 0x1C }, { 0x02, 0x24 }, { 0x02, 0x2B }, { 0x02, 0x33 },
        { 0x02, 0x3B }, { 0x02, 0x42 }, { 0x02, 0x4A }, { 0x02, 0x52 }, { 0x02, 0x5A },
        { 0x02, 0x62 }, { 0x02, 0x6A }, { 0x02, 0x72 }, { 0x02, 0x79 }, { 0x02, 0x81 },
        { 0x02, 0x89 }, { 0x02, 0x91 }, { 0x02, 0x99 }, { 0x02, 0xA1 }, { 0x02, 0xAA },
        { 0x02, 0xB2 }, { 0x02, 0xBA }, { 0x02, 0xC2 }, { 0x02, 0xCA }, { 0x02, 0xD2 },
        { 0x02, 0xDA }, { 0x02, 0xE3 }, { 0x02, 0xEB }, { 0x02, 0xF3 }, { 0x02, 0xFB },
        { 0x03, 0x04 }, { 0x03, 0x0C }, { 0x03, 0x14 }, { 0x03, 0x1D }, { 0x03, 0x25 },
        { 0x03, 0x2D }, { 0x03, 0x36 }, { 0x03, 0x3E }, { 0x03, 0x47 }, { 0x03, 0x4F },
        { 0x03, 0x58 }, { 0x03, 0x60 }, { 0x03, 0x69 }, { 0x03, 0x71 }, { 0x03, 0x7A },
        { 0x03, 0x82 }, { 0x03, 0x8B }, { 0x03, 0x94 }, { 0x03, 0x9C }, { 0x03, 0xA5 },
        { 0x03, 0xAE }, { 0x03, 0xB6 }, { 0x03, 0xBF }, { 0x03, 0xC8 }, { 0x03, 0xD1 },
        { 0x03, 0xD9 }, { 0x03, 0xE2 }, { 0x03, 0xEB }, { 0x03, 0xF4 }, { 0x03, 0xFD },
        { 0x04, 0x06 }, { 0x04, 0x0E }, { 0x04, 0x17 }, { 0x04, 0x20 }, { 0x04, 0x29 },
        { 0x04, 0x32 }, { 0x04, 0x3B }, { 0x04, 0x44 }, { 0x04, 0x4D }, { 0x04, 0x56 },
        { 0x04, 0x5F }, { 0x04, 0x68 }, { 0x04, 0x71 }, { 0x04, 0x7A }, { 0x04, 0x84 },
        { 0x04, 0x8D }, { 0x04, 0x96 }, { 0x04, 0x9F }, { 0x04, 0xA8 }, { 0x04, 0xB1 },
        { 0x04, 0xBB }, { 0x04, 0xC4 }, { 0x04, 0xCD }, { 0x04, 0xD6 }, { 0x04, 0xE0 },
        { 0x04, 0xE9 }, { 0x04, 0xF2 }, { 0x04, 0xFB }, { 0x05, 0x05 }, { 0x05, 0x0E },
        { 0x05, 0x18 }, { 0x05, 0x21 }, { 0x05, 0x2A }, { 0x05, 0x34 }, { 0x05, 0x3D },
        { 0x05, 0x47 }, { 0x05, 0x50 }, { 0x05, 0x5A }, { 0x05, 0x63 }, { 0x05, 0x6D },
        { 0x05, 0x76 }, { 0x05, 0x80 }, { 0x05, 0x89 }, { 0x05, 0x93 }, { 0x05, 0x9C },
        { 0x05, 0xA6 }, { 0x05, 0xAF }, { 0x05, 0xB9 }, { 0x05, 0xC3 }, { 0x05, 0xCC },
        { 0x05, 0xD6 }, { 0x05, 0xE0 }, { 0x05, 0xE9 }, { 0x05, 0xF3 }, { 0x05, 0xFD },
        { 0x06, 0x07 }, { 0x06, 0x10 }, { 0x06, 0x1A }, { 0x06, 0x24 }, { 0x06, 0x2E },
        { 0x06, 0x38 }, { 0x06, 0x41 }, { 0x06, 0x4B }, { 0x06, 0x55 }, { 0x06, 0x5F },
        { 0x06, 0x69 }, { 0x06, 0x73 }, { 0x06, 0x7D }, { 0x06, 0x87 }, { 0x06, 0x91 },
        { 0x06, 0x9A }, { 0x06, 0xA4 }, { 0x06, 0xAE }, { 0x06, 0xB8 }, { 0x06, 0xC2 },
        { 0x06, 0xCC }, { 0x06, 0xD6 }, { 0x06, 0xE0 }, { 0x06, 0xEB }, { 0x06, 0xF5 },
        { 0x06, 0xFF }, { 0x07, 0x09 }, { 0x07, 0x13 }, { 0x07, 0x1D }, { 0x07, 0x27 },
        { 0x07, 0x31 }, { 0x07, 0x3B }, { 0x07, 0x46 }, { 0x07, 0x50 }, { 0x07, 0x5A },
        { 0x07, 0x64 }, { 0x07, 0x6E }, { 0x07, 0x79 }, { 0x07, 0x83 }, { 0x07, 0x8D },
        { 0x07, 0x98 }, { 0x07, 0xA2 }, { 0x07, 0xAC }, { 0x07, 0xB6 }, { 0x07, 0xC1 },
        { 0x07, 0xCB }, { 0x07, 0xD5 }, { 0x07, 0xE0 }, { 0x07, 0xEA }, { 0x07, 0xF5 },
        { 0x07, 0xFF }, { 0x08, 0x22 }, { 0x08, 0x28 }, { 0x08, 0x2F }, { 0x08, 0x36 },
        { 0x08, 0x3D }, { 0x08, 0x43 }, { 0x08, 0x4A }, { 0x08, 0x51 }, { 0x08, 0x58 },
        { 0x08, 0x5F }, { 0x08, 0x65 }, { 0x08, 0x6C }, { 0x08, 0x73 }, { 0x08, 0x7A },
        { 0x08, 0x81 }, { 0x08, 0x87 }, { 0x08, 0x8E }, { 0x08, 0x95 }, { 0x08, 0x9C },
        { 0x08, 0xA3 }, { 0x08, 0xA9 }, { 0x08, 0xB0 }, { 0x08, 0xB7 }, { 0x08, 0xBE },
        { 0x08, 0xC5 }, { 0x08, 0xCB }, { 0x08, 0xD2 }, { 0x08, 0xD9 }, { 0x08, 0xE0 },
        { 0x08, 0xE7 }, { 0x08, 0xED }, { 0x08, 0xF4 }, { 0x08, 0xFB }, { 0x09, 0x02 },
        { 0x09, 0x09 }, { 0x09, 0x0F }, { 0x09, 0x16 }, { 0x09, 0x1D }, { 0x09, 0x24 },
        { 0x09, 0x2B }, { 0x09, 0x31 }, { 0x09, 0x38 }, { 0x09, 0x3F }, { 0x09, 0x46 },
        { 0x09, 0x4D }, { 0x09, 0x53 }, { 0x09, 0x5A }, { 0x09, 0x61 }, { 0x09, 0x68 },
        { 0x09, 0x6F }, { 0x09, 0x75 }, { 0x09, 0x7C }, { 0x09, 0x83 }, { 0x09, 0x8A },
        { 0x09, 0x91 }, { 0x09, 0x97 }, { 0x09, 0x9E }, { 0x09, 0xA5 }, { 0x09, 0xAC },
        { 0x09, 0xB3 }, { 0x09, 0xB9 }, { 0x09, 0xC0 }, { 0x09, 0xC7 }, { 0x09, 0xCE },
        { 0x09, 0xD5 }, { 0x09, 0xDB }, { 0x09, 0xE2 }, { 0x09, 0xE9 }, { 0x09, 0xF0 },
        { 0x09, 0xF7 }, { 0x09, 0xFE }, { 0x0A, 0x04 }, { 0x0A, 0x0B }, { 0x0A, 0x12 },
        { 0x0A, 0x19 }, { 0x0A, 0x20 }, { 0x0A, 0x26 }, { 0x0A, 0x2D }, { 0x0A, 0x34 },
        { 0x0A, 0x3B }, { 0x0A, 0x42 }, { 0x0A, 0x48 }, { 0x0A, 0x4F }, { 0x0A, 0x56 },
        { 0x0A, 0x5D }, { 0x0A, 0x64 }, { 0x0A, 0x6A }, { 0x0A, 0x71 }, { 0x0A, 0x78 },
        { 0x0A, 0x7F }, { 0x0A, 0x86 }, { 0x0A, 0x8C }, { 0x0A, 0x93 }, { 0x0A, 0x9A },
        { 0x0A, 0xA1 }, { 0x0A, 0xA8 }, { 0x0A, 0xAE }, { 0x0A, 0xB5 }, { 0x0A, 0xBC },
        { 0x0A, 0xC3 }, { 0x0A, 0xCA }, { 0x0A, 0xD0 }, { 0x0A, 0xD7 }, { 0x0A, 0xDE },
        { 0x0A, 0xE5 }, { 0x0A, 0xEC }, { 0x0A, 0xF2 }, { 0x0A, 0xF9 }, { 0x0B, 0x00 },
        { 0x0B, 0x07 }, { 0x0B, 0x0E }, { 0x0B, 0x14 }, { 0x0B, 0x1B }, { 0x0B, 0x22 },
        { 0x0B, 0x29 }, { 0x0B, 0x30 }, { 0x0B, 0x36 }, { 0x0B, 0x3D }, { 0x0B, 0x44 },
        { 0x0B, 0x4B }, { 0x0B, 0x52 }, { 0x0B, 0x58 }, { 0x0B, 0x5F }, { 0x0B, 0x66 },
        { 0x0B, 0x6D }, { 0x0B, 0x74 }, { 0x0B, 0x7A }, { 0x0B, 0x81 }, { 0x0B, 0x88 },
        { 0x0B, 0x8F }, { 0x0B, 0x96 }, { 0x0B, 0x9C }, { 0x0B, 0xA3 }, { 0x0B, 0xAA },
        { 0x0B, 0xB1 }, { 0x0B, 0xB8 }, { 0x0B, 0xBE }, { 0x0B, 0xC5 }, { 0x0B, 0xCC },
        { 0x0B, 0xD3 }, { 0x0B, 0xDA }, { 0x0B, 0xE1 }, { 0x0B, 0xE7 }, { 0x0B, 0xEE },
        { 0x0B, 0xF5 }, { 0x0B, 0xFC }, { 0x0C, 0x03 }, { 0x0C, 0x09 }, { 0x0C, 0x10 },
        { 0x0C, 0x17 }, { 0x0C, 0x1E }, { 0x0C, 0x25 }, { 0x0C, 0x2B }, { 0x0C, 0x32 },
        { 0x0C, 0x39 }, { 0x0C, 0x40 }, { 0x0C, 0x47 }, { 0x0C, 0x4D }, { 0x0C, 0x54 },
        { 0x0C, 0x5B }, { 0x0C, 0x62 }, { 0x0C, 0x69 }, { 0x0C, 0x6F }, { 0x0C, 0x76 },
        { 0x0C, 0x7D }, { 0x0C, 0x84 }, { 0x0C, 0x8B }, { 0x0C, 0x91 }, { 0x0C, 0x98 },
        { 0x0C, 0x9F }, { 0x0C, 0xA6 }, { 0x0C, 0xAD }, { 0x0C, 0xB3 }, { 0x0C, 0xBA },
        { 0x0C, 0xC1 }, { 0x0C, 0xC8 }, { 0x0C, 0xCF }, { 0x0C, 0xD5 }, { 0x0C, 0xDC },
        { 0x0C, 0xE3 }, { 0x0C, 0xEA }, { 0x0C, 0xF1 }, { 0x0C, 0xF7 }, { 0x0C, 0xFE },
        { 0x0D, 0x05 }, { 0x0D, 0x0C }, { 0x0D, 0x13 }, { 0x0D, 0x19 }, { 0x0D, 0x20 },
        { 0x0D, 0x27 }, { 0x0D, 0x2E }, { 0x0D, 0x35 }, { 0x0D, 0x3B }, { 0x0D, 0x42 },
        { 0x0D, 0x49 }, { 0x0D, 0x50 }, { 0x0D, 0x57 }, { 0x0D, 0x5D }, { 0x0D, 0x64 },
        { 0x0D, 0x6B }, { 0x0D, 0x72 }, { 0x0D, 0x79 }, { 0x0D, 0x7F }, { 0x0D, 0x86 },
        { 0x0D, 0x8D }, { 0x0D, 0x94 }, { 0x0D, 0x9B }, { 0x0D, 0xA1 }, { 0x0D, 0xA8 },
        { 0x0D, 0xAF }, { 0x0D, 0xB6 }, { 0x0D, 0xBD }, { 0x0D, 0xC4 }, { 0x0D, 0xCA },
        { 0x0D, 0xD1 }, { 0x0D, 0xD8 }, { 0x0D, 0xDF }, { 0x0D, 0xE6 }, { 0x0D, 0xEC },
        { 0x0D, 0xF3 }, { 0x0D, 0xFA }, { 0x0E, 0x01 }, { 0x0E, 0x08 }, { 0x0E, 0x0E },
        { 0x0E, 0x15 }, { 0x0E, 0x1C }, { 0x0E, 0x23 }, { 0x0E, 0x2A }, { 0x0E, 0x30 },
        { 0x0E, 0x37 }, { 0x0E, 0x3E }, { 0x0E, 0x45 }, { 0x0E, 0x4C }, { 0x0E, 0x52 },
        { 0x0E, 0x59 }, { 0x0E, 0x60 }, { 0x0E, 0x67 }, { 0x0E, 0x6E }, { 0x0E, 0x74 },
        { 0x0E, 0x7B }, { 0x0E, 0x82 }, { 0x0E, 0x89 }, { 0x0E, 0x90 }, { 0x0E, 0x96 },
        { 0x0E, 0x9D }, { 0x0E, 0xA4 }, { 0x0E, 0xAB }, { 0x0E, 0xB2 }, { 0x0E, 0xB8 },
        { 0x0E, 0xBF }, { 0x0E, 0xC6 }, { 0x0E, 0xC7 }, { 0x0E, 0xC9 }, { 0x0E, 0xCA },
        { 0x0E, 0xCB }, { 0x0E, 0xCC }, { 0x0E, 0xCE }, { 0x0E, 0xCF }, { 0x0E, 0xD0 },
        { 0x0E, 0xD1 }, { 0x0E, 0xD3 }, { 0x0E, 0xD4 }, { 0x0E, 0xD5 }, { 0x0E, 0xD6 },
        { 0x0E, 0xD7 }, { 0x0E, 0xD8 }, { 0x0E, 0xD9 }, { 0x0E, 0xDB }, { 0x0E, 0xDC },
        { 0x0E, 0xDD }, { 0x0E, 0xDE }, { 0x0E, 0xE0 }, { 0x0E, 0xE1 }, { 0x0E, 0xE2 },
        { 0x0E, 0xE3 }, { 0x0E, 0xE5 }, { 0x0E, 0xE6 }, { 0x0E, 0xE7 }, { 0x0E, 0xE8 },
        { 0x0E, 0xEA }, { 0x0E, 0xEB }, { 0x0E, 0xEC }, { 0x0E, 0xED }, { 0x0E, 0xEF },
        { 0x0E, 0xF0 }, { 0x0E, 0xF1 }, { 0x0E, 0xF2 }, { 0x0E, 0xF4 }, { 0x0E, 0xF5 },
        { 0x0E, 0xF6 }, { 0x0E, 0xF7 }, { 0x0E, 0xF8 }, { 0x0E, 0xF9 }, { 0x0E, 0xFB },
        { 0x0E, 0xFC }, { 0x0E, 0xFD }, { 0x0E, 0xFE }, { 0x0F, 0x00 }, { 0x0F, 0x01 },
        { 0x0F, 0x02 }, { 0x0F, 0x03 }, { 0x0F, 0x05 }, { 0x0F, 0x06 }, { 0x0F, 0x07 },
        { 0x0F, 0x08 }, { 0x0F, 0x0A }, { 0x0F, 0x0B }, { 0x0F, 0x0C }, { 0x0F, 0x0D },
        { 0x0F, 0x0F }, { 0x0F, 0x10 }, { 0x0F, 0x11 }, { 0x0F, 0x12 }, { 0x0F, 0x14 },
        { 0x0F, 0x14 }, { 0x0F, 0x16 }, { 0x0F, 0x17 }, { 0x0F, 0x18 }, { 0x0F, 0x19 },
        { 0x0F, 0x1B }, { 0x0F, 0x1C }, { 0x0F, 0x1D }, { 0x0F, 0x1E }, { 0x0F, 0x20 },
        { 0x0F, 0x21 }, { 0x0F, 0x22 }, { 0x0F, 0x23 }, { 0x0F, 0x25 }, { 0x0F, 0x26 },
        { 0x0F, 0x27 }, { 0x0F, 0x28 }, { 0x0F, 0x2A }, { 0x0F, 0x2B }, { 0x0F, 0x2C },
        { 0x0F, 0x2D }, { 0x0F, 0x2F }, { 0x0F, 0x30 }, { 0x0F, 0x31 }, { 0x0F, 0x32 },
        { 0x0F, 0x34 }, { 0x0F, 0x34 }, { 0x0F, 0x35 }, { 0x0F, 0x37 }, { 0x0F, 0x38 },
        { 0x0F, 0x39 }, { 0x0F, 0x3A }, { 0x0F, 0x3C }, { 0x0F, 0x3D }, { 0x0F, 0x3E },
        { 0x0F, 0x3F }, { 0x0F, 0x41 }, { 0x0F, 0x42 }, { 0x0F, 0x43 }, { 0x0F, 0x44 },
        { 0x0F, 0x46 }, { 0x0F, 0x47 }, { 0x0F, 0x48 }, { 0x0F, 0x49 }, { 0x0F, 0x4B },
        { 0x0F, 0x4C }, { 0x0F, 0x4D }, { 0x0F, 0x4E }, { 0x0F, 0x50 }, { 0x0F, 0x51 },
        { 0x0F, 0x52 }, { 0x0F, 0x53 }, { 0x0F, 0x54 }, { 0x0F, 0x55 }, { 0x0F, 0x57 },
        { 0x0F, 0x58 }, { 0x0F, 0x59 }, { 0x0F, 0x5A }, { 0x0F, 0x5C }, { 0x0F, 0x5D },
        { 0x0F, 0x5E }, { 0x0F, 0x5F }, { 0x0F, 0x61 }, { 0x0F, 0x62 }, { 0x0F, 0x63 },
        { 0x0F, 0x64 }, { 0x0F, 0x66 }, { 0x0F, 0x67 }, { 0x0F, 0x68 }, { 0x0F, 0x69 },
        { 0x0F, 0x6B }, { 0x0F, 0x6C }, { 0x0F, 0x6D }, { 0x0F, 0x6E }, { 0x0F, 0x70 },
        { 0x0F, 0x71 }, { 0x0F, 0x72 }, { 0x0F, 0x73 }, { 0x0F, 0x74 }, { 0x0F, 0x75 },
        { 0x0F, 0x77 }, { 0x0F, 0x78 }, { 0x0F, 0x79 }, { 0x0F, 0x7A }, { 0x0F, 0x7C },
        { 0x0F, 0x7D }, { 0x0F, 0x7E }, { 0x0F, 0x7F }, { 0x0F, 0x81 }, { 0x0F, 0x82 },
        { 0x0F, 0x83 }, { 0x0F, 0x84 }, { 0x0F, 0x86 }, { 0x0F, 0x87 }, { 0x0F, 0x88 },
        { 0x0F, 0x89 }, { 0x0F, 0x8B }, { 0x0F, 0x8C }, { 0x0F, 0x8D }, { 0x0F, 0x8E },
        { 0x0F, 0x90 }, { 0x0F, 0x91 }, { 0x0F, 0x91 }, { 0x0F, 0x93 }, { 0x0F, 0x94 },
        { 0x0F, 0x95 }, { 0x0F, 0x96 }, { 0x0F, 0x98 }, { 0x0F, 0x99 }, { 0x0F, 0x9A },
        { 0x0F, 0x9B }, { 0x0F, 0x9D }, { 0x0F, 0x9E }, { 0x0F, 0x9F }, { 0x0F, 0xA0 },
        { 0x0F, 0xA2 }, { 0x0F, 0xA3 }, { 0x0F, 0xA4 }, { 0x0F, 0xA5 }, { 0x0F, 0xA7 },
        { 0x0F, 0xA8 }, { 0x0F, 0xA9 }, { 0x0F, 0xAA }, { 0x0F, 0xAC }, { 0x0F, 0xAD },
        { 0x0F, 0xAE }, { 0x0F, 0xAF }, { 0x0F, 0xB1 }, { 0x0F, 0xB1 }, { 0x0F, 0xB3 },
        { 0x0F, 0xB4 }, { 0x0F, 0xB5 }, { 0x0F, 0xB6 }, { 0x0F, 0xB8 }, { 0x0F, 0xB9 },
        { 0x0F, 0xBA }, { 0x0F, 0xBB }, { 0x0F, 0xBD }, { 0x0F, 0xBE }, { 0x0F, 0xBF },
        { 0x0F, 0xC0 }, { 0x0F, 0xC2 }, { 0x0F, 0xC3 }, { 0x0F, 0xC4 }, { 0x0F, 0xC5 },
        { 0x0F, 0xC7 }, { 0x0F, 0xC8 }, { 0x0F, 0xC9 }, { 0x0F, 0xCA }, { 0x0F, 0xCC },
        { 0x0F, 0xCD }, { 0x0F, 0xCE }, { 0x0F, 0xCF }, { 0x0F, 0xD0 }, { 0x0F, 0xD1 },
        { 0x0F, 0xD3 }, { 0x0F, 0xD4 }, { 0x0F, 0xD5 }, { 0x0F, 0xD6 }, { 0x0F, 0xD8 },
        { 0x0F, 0xD9 }, { 0x0F, 0xDA }, { 0x0F, 0xDB }, { 0x0F, 0xDD }, { 0x0F, 0xDE },
        { 0x0F, 0xDF }, { 0x0F, 0xE0 }, { 0x0F, 0xE2 }, { 0x0F, 0xE3 }, { 0x0F, 0xE4 },
        { 0x0F, 0xE5 }, { 0x0F, 0xE7 }, { 0x0F, 0xE8 }, { 0x0F, 0xE9 }, { 0x0F, 0xEA },
        { 0x0F, 0xEC }, { 0x0F, 0xED }, { 0x0F, 0xEE }, { 0x0F, 0xEF }, { 0x0F, 0xF0 },
        { 0x0F, 0xF1 }, { 0x0F, 0xF2 }, { 0x0F, 0xF4 }, { 0x0F, 0xF5 }, { 0x0F, 0xF6 },
        { 0x0F, 0xF7 }, { 0x0F, 0xF9 }, { 0x0F, 0xFA }, { 0x0F, 0xFB }, { 0x0F, 0xFC },
        { 0x0F, 0xFE }, { 0x0F, 0xFF },
};

static u8 a55x_hbm_transition_table[MAX_PANEL_HBM][SMOOTH_TRANS_MAX][1] = {
	/* HBM off */
	{
		/* Normal */
		{ 0x20 },
		/* Smooth */
		{ 0x28 },
	},
	/* HBM on */
	{
		/* Normal */
		{ 0x20 },
		/* Smooth */
		{ 0x20 }, /* No smooth dimming in HBM */
	}
};

static u8 a55x_acl_opr_table[MAX_PANEL_HBM][MAX_ANA6710_ACL_OPR][1] = {
	[PANEL_HBM_OFF] = {
		[ANA6710_ACL_OPR_0] = { 0x00 }, /* ACL OFF, OPR 0% */
		[ANA6710_ACL_OPR_1] = { 0x01 }, /* ACL ON, OPR 8% */
		[ANA6710_ACL_OPR_2] = { 0x02 }, /* ACL ON, OPR 15% */
		[ANA6710_ACL_OPR_3] = { 0x02 }, /* ACL ON, OPR 15% */
	},
	[PANEL_HBM_ON] = {
		[ANA6710_ACL_OPR_0] = { 0x00 }, /* ACL ON, OPR 0% */
		[ANA6710_ACL_OPR_1] = { 0x01 }, /* ACL ON, OPR 8% */
		[ANA6710_ACL_OPR_2] = { 0x01 }, /* ACL ON, OPR 8% */
		[ANA6710_ACL_OPR_3] = { 0x01 }, /* ACL ON, OPR 8% */
	},
};

static u8 a55x_lpm_nit_table[4][2] = {
	/* LPM 2NIT: */
	{ 0x00, 0x08 },
	/* LPM 10NIT */
	{ 0x00, 0x2A },
	/* LPM 30NIT */
	{ 0x00, 0x7D },
	/* LPM 60NIT */
	{ 0x00, 0xF6 },
};

static u8 a55x_ffc_table[MAX_ANA6710_HS_CLK][8] = {
	[ANA6710_HS_CLK_1108] = { 0x00, 0x11, 0x11, 0xE9, 0x31, 0x31, 0x31, 0x31 }, // FFC for HS: 1108
	[ANA6710_HS_CLK_1124] = { 0x00, 0x11, 0x11, 0xF1, 0x37, 0x37, 0x37, 0x37 }, // FFC for HS: 1124
	[ANA6710_HS_CLK_1125] = { 0x00, 0x11, 0x11, 0xF2, 0x38, 0x38, 0x38, 0x38 }, // FFC for HS: 1125
};

static u8 a55x_fps_table[MAX_ANA6710_VRR][1] = {
	[ANA6710_VRR_120HS] = { 0x00 },
	[ANA6710_VRR_60HS_120HS_TE_HW_SKIP_1] = { 0x00 },
	[ANA6710_VRR_60HS] = { 0x40 },
	[ANA6710_VRR_30NS] = { 0x00 },
};

static u8 a55x_te_setting_table[MAX_ANA6710_VRR][4] = {
	[ANA6710_VRR_120HS] = { 0x10, 0x90, 0x0F, 0x0F },
	[ANA6710_VRR_60HS_120HS_TE_HW_SKIP_1] = { 0x0B, 0x90, 0x0F, 0x0F },
	[ANA6710_VRR_60HS] = { 0x10, 0x90, 0x0F, 0x0F },
	[ANA6710_VRR_30NS] = { 0x10, 0x90, 0x0F, 0x0F },
};

static u8 a55x_te_frame_sel_table[MAX_ANA6710_VRR][2] = {
	[ANA6710_VRR_120HS] = { 0x00, 0x00 },
	[ANA6710_VRR_60HS_120HS_TE_HW_SKIP_1] = { 0x01, 0x25 },
	[ANA6710_VRR_60HS] = { 0x00, 0x00 },
	[ANA6710_VRR_30NS] = { 0x00, 0x00 },
};

static struct maptbl a55x_maptbl[MAX_MAPTBL] = {
	[GAMMA_MODE2_MAPTBL] = DEFINE_2D_MAPTBL(a55x_brt_table, &DDI_FUNC(ANA6710_MAPTBL_INIT_GAMMA_MODE2_BRT), &OLED_FUNC(OLED_MAPTBL_GETIDX_GM2_BRT), &OLED_FUNC(OLED_MAPTBL_COPY_DEFAULT)),
	[HBM_ONOFF_MAPTBL] = DEFINE_3D_MAPTBL(a55x_hbm_transition_table, &OLED_FUNC(OLED_MAPTBL_INIT_DEFAULT), &DDI_FUNC(ANA6710_MAPTBL_GETIDX_HBM_TRANSITION), &OLED_FUNC(OLED_MAPTBL_COPY_DEFAULT)),
	[ACL_OPR_MAPTBL] = DEFINE_3D_MAPTBL(a55x_acl_opr_table, &OLED_FUNC(OLED_MAPTBL_INIT_DEFAULT), &DDI_FUNC(ANA6710_MAPTBL_GETIDX_ACL_OPR), &OLED_FUNC(OLED_MAPTBL_COPY_DEFAULT)),
	[TSET_MAPTBL] = DEFINE_0D_MAPTBL(a55x_tset_table, &OLED_FUNC(OLED_MAPTBL_INIT_DEFAULT), NULL, &OLED_FUNC(OLED_MAPTBL_COPY_TSET)),
	[LPM_NIT_MAPTBL] = DEFINE_2D_MAPTBL(a55x_lpm_nit_table, &DDI_FUNC(ANA6710_MAPTBL_INIT_LPM_BRT), &DDI_FUNC(ANA6710_MAPTBL_GETIDX_LPM_BRT), &OLED_FUNC(OLED_MAPTBL_COPY_DEFAULT)),
	[TE_SETTING_MAPTBL] = DEFINE_2D_MAPTBL(a55x_te_setting_table, &OLED_FUNC(OLED_MAPTBL_INIT_DEFAULT), &DDI_FUNC(ANA6710_MAPTBL_GETIDX_VRR), &OLED_FUNC(OLED_MAPTBL_COPY_DEFAULT)),
	[TE_FRAME_SEL_MAPTBL] = DEFINE_2D_MAPTBL(a55x_te_frame_sel_table, &OLED_FUNC(OLED_MAPTBL_INIT_DEFAULT), &DDI_FUNC(ANA6710_MAPTBL_GETIDX_VRR), &OLED_FUNC(OLED_MAPTBL_COPY_DEFAULT)),
	[FPS_MAPTBL] = DEFINE_2D_MAPTBL(a55x_fps_table, &OLED_FUNC(OLED_MAPTBL_INIT_DEFAULT), &DDI_FUNC(ANA6710_MAPTBL_GETIDX_VRR), &OLED_FUNC(OLED_MAPTBL_COPY_DEFAULT)),
	[SET_FFC_MAPTBL] = DEFINE_2D_MAPTBL(a55x_ffc_table, &OLED_FUNC(OLED_MAPTBL_INIT_DEFAULT), &DDI_FUNC(ANA6710_MAPTBL_GETIDX_FFC), &OLED_FUNC(OLED_MAPTBL_COPY_DEFAULT)),
};

/* ===================================================================================== */
/* ============================== [ANA6710 COMMAND TABLE] ============================== */
/* ===================================================================================== */
static u8 A55X_KEY1_ENABLE[] = { 0x9F, 0x5A, 0x5A };
static u8 A55X_KEY2_ENABLE[] = { 0xF0, 0x5A, 0x5A };
static u8 A55X_KEY3_ENABLE[] = { 0xFC, 0x5A, 0x5A };

static u8 A55X_KEY1_DISABLE[] = { 0x9F, 0xA5, 0xA5 };
static u8 A55X_KEY2_DISABLE[] = { 0xF0, 0xA5, 0xA5 };
static u8 A55X_KEY3_DISABLE[] = { 0xFC, 0xA5, 0xA5 };
static u8 A55X_SLEEP_OUT[] = { 0x11 };
static u8 A55X_SLEEP_IN[] = { 0x10 };
static u8 A55X_DISPLAY_OFF[] = { 0x28 };
static u8 A55X_DISPLAY_ON[] = { 0x29 };
static u8 A55X_TE_ON[] = { 0x35, 0x00, 0x00 };

static DEFINE_STATIC_PACKET(a55x_level1_key_enable, DSI_PKT_TYPE_WR, A55X_KEY1_ENABLE, 0);
static DEFINE_STATIC_PACKET(a55x_level2_key_enable, DSI_PKT_TYPE_WR, A55X_KEY2_ENABLE, 0);
static DEFINE_STATIC_PACKET(a55x_level3_key_enable, DSI_PKT_TYPE_WR, A55X_KEY3_ENABLE, 0);

static DEFINE_STATIC_PACKET(a55x_level1_key_disable, DSI_PKT_TYPE_WR, A55X_KEY1_DISABLE, 0);
static DEFINE_STATIC_PACKET(a55x_level2_key_disable, DSI_PKT_TYPE_WR, A55X_KEY2_DISABLE, 0);
static DEFINE_STATIC_PACKET(a55x_level3_key_disable, DSI_PKT_TYPE_WR, A55X_KEY3_DISABLE, 0);

static DEFINE_STATIC_PACKET(a55x_sleep_out, DSI_PKT_TYPE_WR, A55X_SLEEP_OUT, 0);
static DEFINE_STATIC_PACKET(a55x_sleep_in, DSI_PKT_TYPE_WR, A55X_SLEEP_IN, 0);
static DEFINE_STATIC_PACKET(a55x_display_on, DSI_PKT_TYPE_WR, A55X_DISPLAY_ON, 0);
static DEFINE_STATIC_PACKET(a55x_display_off, DSI_PKT_TYPE_WR, A55X_DISPLAY_OFF, 0);

static DEFINE_STATIC_PACKET(a55x_te_on, DSI_PKT_TYPE_WR, A55X_TE_ON, 0);

static u8 A55X_CMD_FIFO_SETTING[] = { 0xF8, 0x02 };
static DEFINE_STATIC_PACKET(a55x_cmd_fifo_setting, DSI_PKT_TYPE_WR, A55X_CMD_FIFO_SETTING, 0x1C);

static u8 A55X_TSET_SET[] = {
	0x6A,
	0x00,
};
static DEFINE_PKTUI(a55x_tset_set, &a55x_maptbl[TSET_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(a55x_tset_set, DSI_PKT_TYPE_WR, A55X_TSET_SET, 0x4B);

static u8 A55X_AOD_AOR_MAX[] = { 0xB1, 0x01, 0x09, 0x40};
static DEFINE_STATIC_PACKET(a55x_aod_aor_max, DSI_PKT_TYPE_WR, A55X_AOD_AOR_MAX, 0x52);

static u8 A55X_AOD_FREQ[] = { 0x60, 0x00, 0x00 };
static DEFINE_STATIC_PACKET(a55x_aod_freq, DSI_PKT_TYPE_WR, A55X_AOD_FREQ, 0);

static u8 A55X_AOD_AOR[] = { 0xB1, 0x00 };
static DEFINE_STATIC_PACKET(a55x_aod_aor, DSI_PKT_TYPE_WR, A55X_AOD_AOR, 0x52);

static u8 A55X_SWIRE_NO_PULSE[] = {
	0xF3,
	0x00,
};
static DEFINE_STATIC_PACKET(a55x_swire_no_pulse, DSI_PKT_TYPE_WR, A55X_SWIRE_NO_PULSE, 0x0A);

static u8 A55X_SWIRE_NO_PULSE_LPM_OFF[] = {
	0xF3,
	0x00, 0x00, 0x00
};
static DEFINE_STATIC_PACKET(a55x_swire_no_pulse_lpm_off, DSI_PKT_TYPE_WR, A55X_SWIRE_NO_PULSE_LPM_OFF, 0x06);

static u8 A55X_CURRENT_IMPROVE[] = {
	0xFB,
	0x05
};
static DEFINE_STATIC_PACKET(a55x_current_improve, DSI_PKT_TYPE_WR, A55X_CURRENT_IMPROVE, 0x00);

static u8 A55X_SMOOTH_DIMMING_1F[] = {
	0xB1,
	0x01
};
static DEFINE_STATIC_PACKET(a55x_smooth_dimming_1f, DSI_PKT_TYPE_WR, A55X_SMOOTH_DIMMING_1F, 0x10);

static u8 A55X_SMOOTH_DIMMING_15F[] = {
	0xB1,
	0x0F
};
static DEFINE_STATIC_PACKET(a55x_smooth_dimming_15f, DSI_PKT_TYPE_WR, A55X_SMOOTH_DIMMING_15F, 0x10);

static u8 A55X_TEST_ENABLE[] = {
	0xF2,
	0x11
};
static DEFINE_STATIC_PACKET(a55x_test_enable, DSI_PKT_TYPE_WR, A55X_TEST_ENABLE, 0x20);

static u8 A55X_TE_SHIFT_NORMAL[] = {
	0xB9,
	0x10, 0x90, 0x0F, 0x0F  // 130usec
};
static DEFINE_STATIC_PACKET(a55x_te_shift_normal, DSI_PKT_TYPE_WR, A55X_TE_SHIFT_NORMAL, 0x00);

static u8 A55X_TE_SHIFT_ALPM[] = {
	0xB9,
	0x10, 0x90, 0x2A, 0x0F  // 130usec
};
static DEFINE_STATIC_PACKET(a55x_te_shift_alpm, DSI_PKT_TYPE_WR, A55X_TE_SHIFT_ALPM, 0x00);

static u8 A55X_NORMAL_MODE[] = { 0x53, 0x28 };
static DEFINE_STATIC_PACKET(a55x_normal_mode, DSI_PKT_TYPE_WR, A55X_NORMAL_MODE, 0);

static u8 A55X_BLACK_FRAME_OFF[] = { 0x6A, 0x57, 0x00 };
static DEFINE_STATIC_PACKET(a55x_black_frame_off, DSI_PKT_TYPE_WR, A55X_BLACK_FRAME_OFF, 0x4C);

static u8 A55X_BLACK_FRAME_ON[] = { 0x6A, 0x54, 0x00 };
static DEFINE_STATIC_PACKET(a55x_black_frame_on, DSI_PKT_TYPE_WR, A55X_BLACK_FRAME_ON, 0x4C);

static u8 A55X_LPM_ON[] = { 0x53, 0x24 };
static DEFINE_STATIC_PACKET(a55x_lpm_on, DSI_PKT_TYPE_WR, A55X_LPM_ON, 0);

static u8 A55X_LPM_NIT[] = { 0x51, 0x00, 0xF6 };
static DEFINE_PKTUI(a55x_lpm_nit, &a55x_maptbl[LPM_NIT_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(a55x_lpm_nit, DSI_PKT_TYPE_WR, A55X_LPM_NIT, 0x00);

static DEFINE_PANEL_VSYNC_DELAY(a55x_wait_1_vsync, 1);
static DEFINE_PANEL_FRAME_DELAY(a55x_wait_2_frame, 2);
static DEFINE_RULE_BASED_COND(a55x_cond_is_brightness_ge_260,
		PANEL_BL_PROPERTY_BRIGHTNESS, GE, 260);
/* 120hs, 60phs */
static DEFINE_RULE_BASED_COND(a55x_cond_is_120hz,
		PANEL_PROPERTY_PANEL_REFRESH_RATE, EQ, 120);
/* 60hs */
static DEFINE_RULE_BASED_COND(a55x_cond_is_60hz,
		PANEL_PROPERTY_PANEL_REFRESH_RATE, EQ, 60);
static DEFINE_FUNC_BASED_COND(a55x_cond_is_panel_refresh_rate_changed,
		&OLED_FUNC(OLED_COND_IS_PANEL_REFRESH_RATE_CHANGED));
static DEFINE_RULE_BASED_COND(a55x_cond_is_panel_state_not_lpm,
		PANEL_PROPERTY_PANEL_STATE, NE, PANEL_STATE_ALPM);
static DEFINE_RULE_BASED_COND(a55x_cond_is_panel_state_lpm,
		PANEL_PROPERTY_PANEL_STATE, EQ, PANEL_STATE_ALPM);

#ifdef CONFIG_USDM_PANEL_MASK_LAYER
static DEFINE_PANEL_MDELAY(a55x_wait_1msec, 1);
static DEFINE_PANEL_MDELAY(a55x_wait_9msec, 9);
static DEFINE_PANEL_MDELAY(a55x_wait_7msec, 7);
static DEFINE_PANEL_MDELAY(a55x_wait_3msec, 3);
#endif

static DEFINE_PANEL_MDELAY(a55x_wait_10msec, 10);
static DEFINE_PANEL_MDELAY(a55x_wait_ccd_test, 20);
static DEFINE_PANEL_MDELAY(a55x_wait_crc_test_50msec, 50);
static DEFINE_PANEL_MDELAY(a55x_wait_ecc_test_50msec, 50);
static DEFINE_PANEL_MDELAY(a55x_wait_30msec, 30);
static DEFINE_PANEL_MDELAY(a55x_wait_17msec, 17);
static DEFINE_PANEL_MDELAY(a55x_wait_dsc_test, 20);

static DEFINE_PANEL_MDELAY(a55x_wait_34msec, 34);

static DEFINE_PANEL_MDELAY(a55x_wait_sleep_out_90msec, 90);
static DEFINE_PANEL_MDELAY(a55x_wait_display_off, 20);

static DEFINE_PANEL_MDELAY(a55x_wait_sleep_in, 120);
static DEFINE_PANEL_UDELAY(a55x_wait_1usec, 1);

static DEFINE_PANEL_FRAME_DELAY(a55x_wait_1_frame, 1);

static DEFINE_PANEL_KEY(a55x_level1_key_enable, CMD_LEVEL_1, KEY_ENABLE, &PKTINFO(a55x_level1_key_enable));
static DEFINE_PANEL_KEY(a55x_level2_key_enable, CMD_LEVEL_2, KEY_ENABLE, &PKTINFO(a55x_level2_key_enable));
static DEFINE_PANEL_KEY(a55x_level3_key_enable, CMD_LEVEL_3, KEY_ENABLE, &PKTINFO(a55x_level3_key_enable));

static DEFINE_PANEL_KEY(a55x_level1_key_disable, CMD_LEVEL_1, KEY_DISABLE, &PKTINFO(a55x_level1_key_disable));
static DEFINE_PANEL_KEY(a55x_level2_key_disable, CMD_LEVEL_2, KEY_DISABLE, &PKTINFO(a55x_level2_key_disable));
static DEFINE_PANEL_KEY(a55x_level3_key_disable, CMD_LEVEL_3, KEY_DISABLE, &PKTINFO(a55x_level3_key_disable));

static u8 A55X_HBM_TRANSITION[] = {
	0x53, 0x20
};
static DEFINE_PKTUI(a55x_hbm_transition, &a55x_maptbl[HBM_ONOFF_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(a55x_hbm_transition, DSI_PKT_TYPE_WR, A55X_HBM_TRANSITION, 0);

static u8 A55X_ACL_SETTING[] = {
	0xB1,
	0x50, 0x50, 0x15, 0x55, 0x55, 0x55, 0x08, 0xF1, /* 32 Frame Avg. */
	0xC6, 0x48, 0x10, 0x00, 0x28, 0x4C, 0x99, 0x00, /* 32 Frame Dimming */
	0x20, 0x10, 0xB0 /* Start Step 50% */
};
static DEFINE_STATIC_PACKET(a55x_acl_setting, DSI_PKT_TYPE_WR, A55X_ACL_SETTING, 0x3F);

static u8 A55X_ACL_SET[] = {
	0x66,
	0x01, 0x6D,
};
static DEFINE_STATIC_PACKET(a55x_acl_set, DSI_PKT_TYPE_WR, A55X_ACL_SET, 0);

static u8 A55X_ACL_CONTROL[] = {
	0x55, 0x01
};
static DEFINE_PKTUI(a55x_acl_control, &a55x_maptbl[ACL_OPR_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(a55x_acl_control, DSI_PKT_TYPE_WR, A55X_ACL_CONTROL, 0);

static u8 A55X_ACL_DIM_OFF[] = {
	0x55,
	0x00
};
static DEFINE_STATIC_PACKET(a55x_acl_dim_off, DSI_PKT_TYPE_WR, A55X_ACL_DIM_OFF, 0);

static u8 A55X_WRDISBV[] = {
	0x51, 0x03, 0xFF
};
static DEFINE_PKTUI(a55x_wrdisbv, &a55x_maptbl[GAMMA_MODE2_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(a55x_wrdisbv, DSI_PKT_TYPE_WR, A55X_WRDISBV, 0);

static u8 A55X_CASET[] = { 0x2A, 0x00, 0x00, 0x04, 0x37 };
static u8 A55X_PASET[] = { 0x2B, 0x00, 0x00, 0x09, 0x23 };
static DEFINE_STATIC_PACKET(a55x_caset, DSI_PKT_TYPE_WR, A55X_CASET, 0);
static DEFINE_STATIC_PACKET(a55x_paset, DSI_PKT_TYPE_WR, A55X_PASET, 0);

static u8 A55X_PCD_SET_DET_LOW[] = {
	0xCC,
	0x5D, 0x59	/* default high, Enable SW RESET */
};
static DEFINE_STATIC_PACKET(a55x_pcd_setting, DSI_PKT_TYPE_WR, A55X_PCD_SET_DET_LOW, 0);

static u8 A55X_CELL_ID_READ_ON[] = {
	0xE2,
	0x01,
};
static DEFINE_STATIC_PACKET(a55x_cell_id_read_on, DSI_PKT_TYPE_WR, A55X_CELL_ID_READ_ON, 0);

static u8 A55X_ERR_FG_ENABLE[] = {
	0xED,
	0x46, 0x00, 0x0B, 0x0A /* ERR_FG ON */
};
static DEFINE_STATIC_PACKET(a55x_err_fg_enable, DSI_PKT_TYPE_WR, A55X_ERR_FG_ENABLE, 0);

static u8 A55X_ERR_FG_DISABLE[] = {
	0xED,
	0x46, 0x00, 0x0B, 0x08 /* ERR_FG OFF */
};
static DEFINE_STATIC_PACKET(a55x_err_fg_disable, DSI_PKT_TYPE_WR, A55X_ERR_FG_DISABLE, 0);

static u8 A55X_ERR_FG_SETTING[] = {
	/* Defalut LOW */
	0xE5, 0x04,
};
static DEFINE_STATIC_PACKET(a55x_err_fg_setting, DSI_PKT_TYPE_WR, A55X_ERR_FG_SETTING, 0);

static u8 A55X_ELVSS_TIMING_SETTING[] = {
	0xB5, 0x48,
};
static DEFINE_STATIC_PACKET(a55x_elvss_timing_setting, DSI_PKT_TYPE_WR, A55X_ELVSS_TIMING_SETTING, 0);

static u8 A55X_TSP_VSYNC_NORMAL[] = {
	0xB9,
	0x05, 0x44, 0xEE, 0xEE, 0x55, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x01
};
static DEFINE_STATIC_PACKET(a55x_tsp_vsync_normal, DSI_PKT_TYPE_WR, A55X_TSP_VSYNC_NORMAL, 0x14);

static u8 A55X_TSP_VSYNC_ALPM[] = {
	0xB9,
	0x05, 0x44, 0xEE, 0xEE, 0x55, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x01
};
static DEFINE_STATIC_PACKET(a55x_tsp_vsync_alpm, DSI_PKT_TYPE_WR, A55X_TSP_VSYNC_ALPM, 0x14);

static u8 A55X_FPS[] = { 0x60, 0x00, 0x40 };
static DEFINE_PKTUI(a55x_fps, &a55x_maptbl[FPS_MAPTBL], 2);
static DEFINE_VARIABLE_PACKET(a55x_fps, DSI_PKT_TYPE_WR, A55X_FPS, 0);

static u8 A55X_PANEL_UPDATE[] = {
	0xF7,
	0x07
};
static DEFINE_STATIC_PACKET(a55x_panel_update, DSI_PKT_TYPE_WR, A55X_PANEL_UPDATE, 0);

static u8 A55X_DSC[] = {
	0x9D,
	0x01
};
static DEFINE_STATIC_PACKET(a55x_dsc, DSI_PKT_TYPE_WR, A55X_DSC, 0);

static u8 A55X_PPS[] = {
	//1080x2340 Slice Info : 540x30
	0x9E,
	0x11, 0x00, 0x00, 0x89, 0x30, 0x80, 0x09, 0x24,
	0x04, 0x38, 0x00, 0x1E, 0x02, 0x1C, 0x02, 0x1C, 0x02,
	0x00, 0x02, 0x0E, 0x00, 0x20, 0x02, 0xE3, 0x00, 0x07,
	0x00, 0x0C, 0x03, 0x50, 0x03, 0x64, 0x18, 0x00, 0x10,
	0xF0, 0x03, 0x0C, 0x20, 0x00, 0x06, 0x0B, 0x0B, 0x33,
	0x0E, 0x1C, 0x2A, 0x38, 0x46, 0x54, 0x62, 0x69, 0x70,
	0x77, 0x79, 0x7B, 0x7D, 0x7E, 0x01, 0x02, 0x01, 0x00,
	0x09, 0x40, 0x09, 0xBE, 0x19, 0xFC, 0x19, 0xFA, 0x19,
	0xF8, 0x1A, 0x38, 0x1A, 0x78, 0x1A, 0xB6, 0x2A, 0xF6,
	0x2B, 0x34, 0x2B, 0x74, 0x3B, 0x74, 0x6B, 0xF4
};
static DEFINE_STATIC_PACKET(a55x_pps, DSI_PKT_TYPE_WR, A55X_PPS, 0);

static u8 A55X_FFC_SETTING_1[] = {
	0xF8,
	0x00,
};
static DEFINE_STATIC_PACKET(a55x_ffc_setting_1, DSI_PKT_TYPE_WR, A55X_FFC_SETTING_1, 0x01);

static u8 A55X_FFC_SETTING_2[] = {
	0xF8,
	0x00, 0x11, 0x11, 0xE9, 0x31, 0x31, 0x31, 0x31
};
static DEFINE_PKTUI(a55x_ffc_setting_2, &a55x_maptbl[SET_FFC_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(a55x_ffc_setting_2, DSI_PKT_TYPE_WR, A55X_FFC_SETTING_2, 0x08);

static u8 A55X_FFC_SETTING_3[] = {
	0xF8,
	0x10,
};
static DEFINE_STATIC_PACKET(a55x_ffc_setting_3, DSI_PKT_TYPE_WR, A55X_FFC_SETTING_3, 0x01);


static DEFINE_PANEL_TIMER_MDELAY(a55x_init_complete_delay, 30);
static DEFINE_PANEL_TIMER_BEGIN(a55x_init_complete_delay,
		TIMER_DLYINFO(&a55x_init_complete_delay));

#ifdef CONFIG_USDM_FACTORY_CCD_TEST
static u8 A55X_CCD_ENABLE[] = {
	0xCC,
	0x5D, 0x51
};

static DEFINE_STATIC_PACKET(a55x_ccd_enable, DSI_PKT_TYPE_WR, A55X_CCD_ENABLE, 0);

static u8 A55X_CCD_DISABLE[] = {
	0xCC,
	0x5D, 0x59
};

static DEFINE_STATIC_PACKET(a55x_ccd_disable, DSI_PKT_TYPE_WR, A55X_CCD_DISABLE, 0);

#endif

#ifdef CONFIG_USDM_FACTORY_DSC_CRC_TEST
static u8 A55X_CRC_TEST_ENABLE[] = {
	0xF2,
	0x11
};
static DEFINE_STATIC_PACKET(a55x_crc_test_enable, DSI_PKT_TYPE_WR, A55X_CRC_TEST_ENABLE, 0x20);

static u8 A55X_CRC_VDDL_HIGH[] = {
	0xF8,
	0x0B
};
static DEFINE_STATIC_PACKET(a55x_crc_vddl_high, DSI_PKT_TYPE_WR, A55X_CRC_VDDL_HIGH, 0x15);

static u8 A55X_DECODER_TEST_ENABLE_1[] = {
	0xFB,
	0x00
};
static DEFINE_STATIC_PACKET(a55x_decoder_test_enable_1, DSI_PKT_TYPE_WR, A55X_DECODER_TEST_ENABLE_1, 0);

static u8 A55X_DECODER_TEST_ENABLE_2[] = {
	0xFB,
	0x01
};
static DEFINE_STATIC_PACKET(a55x_decoder_test_enable_2, DSI_PKT_TYPE_WR, A55X_DECODER_TEST_ENABLE_2, 0x0D);

static u8 A55X_DECODER_TEST_DISABLE_1[] = {
	0xFB,
	0x05
};
static DEFINE_STATIC_PACKET(a55x_decoder_test_disable_1, DSI_PKT_TYPE_WR, A55X_DECODER_TEST_DISABLE_1, 0);

static u8 A55X_DECODER_TEST_DISABLE_2[] = {
	0xFB,
	0x00
};
static DEFINE_STATIC_PACKET(a55x_decoder_test_disable_2, DSI_PKT_TYPE_WR, A55X_DECODER_TEST_DISABLE_2, 0x0D);

#endif

#ifdef CONFIG_USDM_FACTORY_ECC_TEST
static u8 A55X_ECC_SETTING_ENABLE[] = {
	0xF2,
	0xE1
};
static DEFINE_STATIC_PACKET(a55x_ecc_setting_enable, DSI_PKT_TYPE_WR, A55X_ECC_SETTING_ENABLE, 0x14);

static u8 A55X_ECC_TEST_ENABLE[] = {
	0xF2,
	0x11
};
static DEFINE_STATIC_PACKET(a55x_ecc_test_enable, DSI_PKT_TYPE_WR, A55X_ECC_TEST_ENABLE, 0x20);

static u8 A55X_ECC_SETTING_DISABLE[] = {
	0xF2,
	0xE5
};

static DEFINE_STATIC_PACKET(a55x_ecc_setting_disable, DSI_PKT_TYPE_WR, A55X_ECC_SETTING_DISABLE, 0x14);
#endif

static DEFINE_RULE_BASED_COND(a55x_cond_is_factory_mode,
		PANEL_PROPERTY_IS_FACTORY_MODE, EQ, 1);

static u8 A55X_TE_SETTING1[] = {
	0xB9,
	0x10, 0x90, 0x0F, 0x0F
};
static DEFINE_PKTUI(a55x_te_setting1, &a55x_maptbl[TE_SETTING_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(a55x_te_setting1, DSI_PKT_TYPE_WR, A55X_TE_SETTING1, 0);

static u8 A55X_TE_FRAME_SEL[] = {
	0xB9,
	0x00, 0x00
};
static DEFINE_PKTUI(a55x_te_frame_sel, &a55x_maptbl[TE_FRAME_SEL_MAPTBL], 1);
static DEFINE_VARIABLE_PACKET(a55x_te_frame_sel, DSI_PKT_TYPE_WR, A55X_TE_FRAME_SEL, 0x07);

static struct seqinfo SEQINFO(a55x_set_bl_param_seq);
static struct seqinfo SEQINFO(a55x_set_fps_param_seq);
static struct seqinfo SEQINFO(a55x_res_init_seq);

static void *a55x_common_setting_cmdtbl[] = {
	&KEYINFO(a55x_level1_key_enable),
	&KEYINFO(a55x_level2_key_enable),
	&KEYINFO(a55x_level3_key_enable),

	/* Common Setting */
	/* 4.1.1 TE(Vsync) ON/OFF */
	&PKTINFO(a55x_te_on),
	&PKTINFO(a55x_te_shift_normal),

	/* 4.1.2 PAGE ADDRESS SET */
	&PKTINFO(a55x_caset),
	&PKTINFO(a55x_paset),

	/* 4.1.3 FFC SET */
	&PKTINFO(a55x_ffc_setting_1),
	&PKTINFO(a55x_ffc_setting_2),
	&PKTINFO(a55x_ffc_setting_3),
	&DLYINFO(a55x_wait_10msec),
	&PKTINFO(a55x_panel_update),

	/* TSP vsync */
	&PKTINFO(a55x_tsp_vsync_normal),
	&PKTINFO(a55x_panel_update),

	/* 4.1.4 ERR_FG Setting */
	&PKTINFO(a55x_err_fg_enable),
	&PKTINFO(a55x_err_fg_setting),

	/* 4.1.5 PCD Setting */
	&PKTINFO(a55x_pcd_setting),

	/* 4.1.5 Cell ID Read */
	&PKTINFO(a55x_cell_id_read_on),

	/* 4.1.7 ACL Setting */
	&PKTINFO(a55x_acl_setting),
	&PKTINFO(a55x_panel_update),

	/* 4.1.8 DSC Setting */
	&PKTINFO(a55x_dsc),
	&PKTINFO(a55x_pps),

	/* 4.1.9 ASWIRE Pulse Off Setting */
	&PKTINFO(a55x_swire_no_pulse),
	&PKTINFO(a55x_panel_update),

	/* 4.1.10 TE Masking */
	/* Todo */

	/* 4.1.11 Current Improve Code */
	&PKTINFO(a55x_current_improve),
	&PKTINFO(a55x_panel_update),

	/* 4.1.12 Smooth Dimming Setting */
	&PKTINFO(a55x_smooth_dimming_1f),
	&PKTINFO(a55x_panel_update),

	/* 4.2 Brightness Setting */
	&PKTINFO(a55x_hbm_transition), /* 53h should be not included in bl_seq */
	&SEQINFO(a55x_set_bl_param_seq), /* includes FPS setting also */
	&SEQINFO(a55x_set_fps_param_seq),
	&PKTINFO(a55x_panel_update),

	&PKTINFO(a55x_test_enable),
	&PKTINFO(a55x_panel_update),

	&KEYINFO(a55x_level3_key_disable),
	&KEYINFO(a55x_level2_key_disable),
	&KEYINFO(a55x_level1_key_disable),
};

static DEFINE_SEQINFO(a55x_common_setting_seq, a55x_common_setting_cmdtbl);

static void *a55x_init_cmdtbl[] = {
	&DLYINFO(a55x_wait_10msec),
	&KEYINFO(a55x_level1_key_enable),
	&PKTINFO(a55x_sleep_out),
	&DLYINFO(a55x_wait_sleep_out_90msec),
	&KEYINFO(a55x_level1_key_disable),
	&SEQINFO(a55x_common_setting_seq),
	&TIMER_DLYINFO_BEGIN(a55x_init_complete_delay),
	&CONDINFO_IF(a55x_cond_is_factory_mode),
		&SEQINFO(a55x_res_init_seq),
	&CONDINFO_FI(a55x_cond_is_factory_mode),
	&TIMER_DLYINFO(a55x_init_complete_delay),
};

static void *a55x_res_init_cmdtbl[] = {
	&KEYINFO(a55x_level1_key_enable),
	&KEYINFO(a55x_level2_key_enable),
	&KEYINFO(a55x_level3_key_enable),

	&ana6710_restbl[RES_ID],
	&ana6710_restbl[RES_COORDINATE],
	&ana6710_restbl[RES_CODE],
	&ana6710_restbl[RES_DATE],
	&ana6710_restbl[RES_OCTA_ID],
	&ana6710_restbl[RES_ANALOG_GAMMA_120HS],
#ifdef CONFIG_USDM_PANEL_DPUI
	&ana6710_restbl[RES_SELF_DIAG],
	&ana6710_restbl[RES_ERR_FG],
	&ana6710_restbl[RES_DSI_ERR],
#endif
	&KEYINFO(a55x_level3_key_disable),
	&KEYINFO(a55x_level2_key_disable),
	&KEYINFO(a55x_level1_key_disable),
};
static DEFINE_SEQINFO(a55x_res_init_seq, a55x_res_init_cmdtbl);

static void *a55x_set_bl_param_cmdtbl[] = {
	&PKTINFO(a55x_tset_set),
	&PKTINFO(a55x_acl_control),
	&PKTINFO(a55x_wrdisbv),
};

static DEFINE_SEQINFO(a55x_set_bl_param_seq, a55x_set_bl_param_cmdtbl);

static void *a55x_set_fps_param_cmdtbl[] = {
	&PKTINFO(a55x_te_setting1),
	&PKTINFO(a55x_fps),
	&PKTINFO(a55x_panel_update),
	&PKTINFO(a55x_te_frame_sel),
	&PKTINFO(a55x_panel_update),
};

static DEFINE_SEQINFO(a55x_set_fps_param_seq, a55x_set_fps_param_cmdtbl);

static void *a55x_set_bl_cmdtbl[] = {
	&KEYINFO(a55x_level1_key_enable),
	&KEYINFO(a55x_level2_key_enable),
	&KEYINFO(a55x_level3_key_enable),
	&SEQINFO(a55x_set_fps_param_seq),
	&PKTINFO(a55x_hbm_transition),
	&SEQINFO(a55x_set_bl_param_seq),
	&PKTINFO(a55x_panel_update),
	&KEYINFO(a55x_level3_key_disable),
	&KEYINFO(a55x_level2_key_disable),
	&KEYINFO(a55x_level1_key_disable),
};

static void *a55x_display_mode_cmdtbl[] = {
	&CONDINFO_IF(a55x_cond_is_panel_state_not_lpm),
		&KEYINFO(a55x_level1_key_enable),
		&KEYINFO(a55x_level2_key_enable),
		&KEYINFO(a55x_level3_key_enable),
		&SEQINFO(a55x_set_fps_param_seq),
		&PKTINFO(a55x_hbm_transition),
		&SEQINFO(a55x_set_bl_param_seq),
		&PKTINFO(a55x_panel_update),
		&KEYINFO(a55x_level3_key_disable),
		&KEYINFO(a55x_level2_key_disable),
		&KEYINFO(a55x_level1_key_disable),
	&CONDINFO_FI(a55x_cond_is_panel_state_not_lpm),
};

static void *a55x_display_on_cmdtbl[] = {
	&KEYINFO(a55x_level1_key_enable),
	&KEYINFO(a55x_level2_key_enable),
	&PKTINFO(a55x_display_on),
	&DLYINFO(a55x_wait_1_frame),
	&PKTINFO(a55x_smooth_dimming_15f),
	&KEYINFO(a55x_level2_key_disable),
	&KEYINFO(a55x_level1_key_disable),
};

static void *a55x_display_off_cmdtbl[] = {
	&KEYINFO(a55x_level1_key_enable),
	&KEYINFO(a55x_level2_key_enable),
	&PKTINFO(a55x_display_off),
	&KEYINFO(a55x_level2_key_disable),
	&KEYINFO(a55x_level1_key_disable),
	&DLYINFO(a55x_wait_display_off),
};

static void *a55x_exit_cmdtbl[] = {
	&KEYINFO(a55x_level1_key_enable),
	&KEYINFO(a55x_level2_key_enable),
	&KEYINFO(a55x_level3_key_enable),
#ifdef CONFIG_USDM_PANEL_DPUI
	&ana6710_dmptbl[DUMP_RDDPM_SLEEP_IN],
	&ana6710_dmptbl[DUMP_RDDSM],
//	&ana6710_dmptbl[DUMP_ERR],
	&ana6710_dmptbl[DUMP_DSI_ERR],
	&ana6710_dmptbl[DUMP_SELF_DIAG],
#endif
	&PKTINFO(a55x_sleep_in),
	&KEYINFO(a55x_level3_key_disable),
	&KEYINFO(a55x_level2_key_disable),
	&KEYINFO(a55x_level1_key_disable),
	&DLYINFO(a55x_wait_sleep_in),
};

static void *a55x_alpm_init_cmdtbl[] = {
	&KEYINFO(a55x_level2_key_enable),
	&PKTINFO(a55x_aod_aor_max),
	&PKTINFO(a55x_aod_freq),
	&PKTINFO(a55x_panel_update),
	&PKTINFO(a55x_tsp_vsync_alpm),
	&PKTINFO(a55x_panel_update),
	&PKTINFO(a55x_te_shift_alpm),
	&KEYINFO(a55x_level2_key_disable),
	&DLYINFO(a55x_wait_17msec),
};

static void *a55x_alpm_set_bl_cmdtbl[] = {
	&KEYINFO(a55x_level1_key_enable),
	&KEYINFO(a55x_level2_key_enable),
	&PKTINFO(a55x_black_frame_on),
	&PKTINFO(a55x_aod_aor),
	&PKTINFO(a55x_lpm_on),
	&PKTINFO(a55x_lpm_nit),
	&PKTINFO(a55x_panel_update),
	&DLYINFO(a55x_wait_1usec),
	&PKTINFO(a55x_display_on),
	&KEYINFO(a55x_level2_key_disable),
	&KEYINFO(a55x_level1_key_disable),
	&DLYINFO(a55x_wait_17msec),
};

static void *a55x_alpm_exit_cmdtbl[] = {
	&KEYINFO(a55x_level2_key_enable),
	&KEYINFO(a55x_level3_key_enable),
	&PKTINFO(a55x_black_frame_off),
	&PKTINFO(a55x_swire_no_pulse_lpm_off),
	&PKTINFO(a55x_normal_mode),
	&PKTINFO(a55x_wrdisbv),
	&PKTINFO(a55x_panel_update),
	&PKTINFO(a55x_tsp_vsync_normal),
	&PKTINFO(a55x_panel_update),
	&PKTINFO(a55x_te_shift_normal),
	&DLYINFO(a55x_wait_34msec),
	&KEYINFO(a55x_level3_key_disable),
	&KEYINFO(a55x_level2_key_disable),
};

static void *a55x_alpm_exit_after_cmdtbl[] = {
	&KEYINFO(a55x_level2_key_enable),
	&KEYINFO(a55x_level3_key_enable),
	&SEQINFO(a55x_set_fps_param_seq),
	&PKTINFO(a55x_hbm_transition),
	&SEQINFO(a55x_set_bl_param_seq),
	&PKTINFO(a55x_panel_update),
	&DLYINFO(a55x_wait_1usec),
	&KEYINFO(a55x_level3_key_disable),
	&KEYINFO(a55x_level2_key_disable),
};

static void *a55x_dump_cmdtbl[] = {
	&KEYINFO(a55x_level1_key_enable),
	&KEYINFO(a55x_level2_key_enable),
	&KEYINFO(a55x_level3_key_enable),
	&ana6710_dmptbl[DUMP_RDDPM],
	&ana6710_dmptbl[DUMP_RDDSM],
	&ana6710_dmptbl[DUMP_DSI_ERR],
	&ana6710_dmptbl[DUMP_SELF_DIAG],
	&KEYINFO(a55x_level3_key_disable),
	&KEYINFO(a55x_level2_key_disable),
	&KEYINFO(a55x_level1_key_disable),
};

static void *a55x_ffc_cmdtbl[] = {
	&KEYINFO(a55x_level1_key_enable),
	&KEYINFO(a55x_level2_key_enable),
	&KEYINFO(a55x_level3_key_enable),
	&PKTINFO(a55x_ffc_setting_1),
	&PKTINFO(a55x_ffc_setting_2),
	&PKTINFO(a55x_ffc_setting_3),
	&DLYINFO(a55x_wait_10msec),
	&PKTINFO(a55x_panel_update),
	&KEYINFO(a55x_level3_key_disable),
	&KEYINFO(a55x_level2_key_disable),
	&KEYINFO(a55x_level1_key_disable),
};

static void *a55x_check_condition_cmdtbl[] = {
	&KEYINFO(a55x_level1_key_enable),
	&KEYINFO(a55x_level2_key_enable),
	&KEYINFO(a55x_level3_key_enable),
	&ana6710_dmptbl[DUMP_RDDPM],
	&KEYINFO(a55x_level3_key_disable),
	&KEYINFO(a55x_level2_key_disable),
	&KEYINFO(a55x_level1_key_disable),
};

#ifdef CONFIG_USDM_PANEL_MASK_LAYER
static void *a55x_mask_layer_workaround_cmdtbl[] = {
	&KEYINFO(a55x_level1_key_enable),
	&KEYINFO(a55x_level2_key_enable),
	&KEYINFO(a55x_level3_key_enable),
	&PKTINFO(a55x_wrdisbv),
	&PKTINFO(a55x_hbm_transition),
	&KEYINFO(a55x_level3_key_disable),
	&KEYINFO(a55x_level2_key_disable),
	&KEYINFO(a55x_level1_key_disable),

	&DLYINFO(a55x_wait_2_frame),
};

static void *a55x_mask_layer_enter_br_cmdtbl[] = {
	&DLYINFO(a55x_wait_1_vsync),
	&DLYINFO(a55x_wait_1msec),

	&KEYINFO(a55x_level1_key_enable),
	&KEYINFO(a55x_level2_key_enable),
	&KEYINFO(a55x_level3_key_enable),

	&PKTINFO(a55x_acl_dim_off),
	&PKTINFO(a55x_wrdisbv),

	&KEYINFO(a55x_level3_key_disable),
	&KEYINFO(a55x_level2_key_disable),
	&KEYINFO(a55x_level1_key_disable),

	&CONDINFO_IF(a55x_cond_is_120hz),
		&DLYINFO(a55x_wait_1_frame),
	&CONDINFO_FI(a55x_cond_is_120hz),
};

static void *a55x_mask_layer_exit_br_cmdtbl[] = {
	&DLYINFO(a55x_wait_1_vsync),
	&DLYINFO(a55x_wait_1msec),

	&KEYINFO(a55x_level1_key_enable),
	&KEYINFO(a55x_level2_key_enable),
	&KEYINFO(a55x_level3_key_enable),

	&PKTINFO(a55x_acl_control),
	&PKTINFO(a55x_wrdisbv),

	&KEYINFO(a55x_level3_key_disable),
	&KEYINFO(a55x_level2_key_disable),
	&KEYINFO(a55x_level1_key_disable),

	&CONDINFO_IF(a55x_cond_is_120hz),
		&DLYINFO(a55x_wait_1_frame),
	&CONDINFO_FI(a55x_cond_is_120hz),
};
#endif

#ifdef CONFIG_USDM_FACTORY_DSC_CRC_TEST
static void *a55x_decoder_test_cmdtbl[] = {
	&KEYINFO(a55x_level2_key_enable),
	&KEYINFO(a55x_level3_key_enable),

	&PKTINFO(a55x_crc_test_enable),
	&DLYINFO(a55x_wait_crc_test_50msec),
	&DLYINFO(a55x_wait_crc_test_50msec),
	&ana6710_restbl[RES_DECODER_TEST1],

	&PKTINFO(a55x_crc_vddl_high),
	&DLYINFO(a55x_wait_crc_test_50msec),
	&PKTINFO(a55x_crc_test_enable),
	&DLYINFO(a55x_wait_crc_test_50msec),
	&DLYINFO(a55x_wait_crc_test_50msec),
	&ana6710_restbl[RES_DECODER_TEST2],

	&PKTINFO(a55x_decoder_test_enable_1),
	&PKTINFO(a55x_decoder_test_enable_2),
	&DLYINFO(a55x_wait_crc_test_50msec),
	&ana6710_restbl[RES_DECODER_TEST3],
	&PKTINFO(a55x_decoder_test_disable_1),
	&PKTINFO(a55x_decoder_test_disable_2),

	&KEYINFO(a55x_level2_key_disable),
	&KEYINFO(a55x_level3_key_disable),
};
#endif

#ifdef CONFIG_USDM_FACTORY_CCD_TEST
static void *a55x_ccd_test_cmdtbl[] = {
	&KEYINFO(a55x_level2_key_enable),
	&KEYINFO(a55x_level3_key_enable),
	&PKTINFO(a55x_ccd_enable),
	&DLYINFO(a55x_wait_ccd_test),
	&ana6710_restbl[RES_CCD_STATE],
	&PKTINFO(a55x_ccd_disable),
	&KEYINFO(a55x_level2_key_disable),
	&KEYINFO(a55x_level3_key_disable),
};
#endif

#ifdef CONFIG_USDM_FACTORY_ECC_TEST
static void *a55x_ecc_test_cmdtbl[] = {
	&KEYINFO(a55x_level2_key_enable),
	&KEYINFO(a55x_level3_key_enable),
	&PKTINFO(a55x_ecc_setting_enable),
	&PKTINFO(a55x_ecc_test_enable),
	&DLYINFO(a55x_wait_crc_test_50msec),
	&DLYINFO(a55x_wait_crc_test_50msec),
	&ana6710_restbl[RES_ECC_TEST],
	&PKTINFO(a55x_ecc_setting_disable),
	&KEYINFO(a55x_level2_key_disable),
	&KEYINFO(a55x_level3_key_disable),
};
#endif

static void *a55x_dummy_cmdtbl[] = {
	NULL,
};

static struct seqinfo a55x_seqtbl[] = {
	SEQINFO_INIT(PANEL_INIT_SEQ, a55x_init_cmdtbl),
	SEQINFO_INIT(PANEL_RES_INIT_SEQ, a55x_res_init_cmdtbl),
	SEQINFO_INIT(PANEL_SET_BL_SEQ, a55x_set_bl_cmdtbl),
	SEQINFO_INIT(PANEL_DISPLAY_ON_SEQ, a55x_display_on_cmdtbl),
	SEQINFO_INIT(PANEL_DISPLAY_OFF_SEQ, a55x_display_off_cmdtbl),
	SEQINFO_INIT(PANEL_EXIT_SEQ, a55x_exit_cmdtbl),
	SEQINFO_INIT(PANEL_DISPLAY_MODE_SEQ, a55x_display_mode_cmdtbl),
	SEQINFO_INIT(PANEL_ALPM_INIT_SEQ, a55x_alpm_init_cmdtbl),
	SEQINFO_INIT(PANEL_ALPM_SET_BL_SEQ, a55x_alpm_set_bl_cmdtbl),
	SEQINFO_INIT(PANEL_ALPM_EXIT_SEQ, a55x_alpm_exit_cmdtbl),
	SEQINFO_INIT(PANEL_ALPM_EXIT_AFTER_SEQ, a55x_alpm_exit_after_cmdtbl),
#ifdef CONFIG_USDM_PANEL_MASK_LAYER
	SEQINFO_INIT(PANEL_MASK_LAYER_STOP_DIMMING_SEQ, a55x_mask_layer_workaround_cmdtbl),
	SEQINFO_INIT(PANEL_MASK_LAYER_ENTER_BR_SEQ, a55x_mask_layer_enter_br_cmdtbl), //temp br
	SEQINFO_INIT(PANEL_MASK_LAYER_EXIT_BR_SEQ, a55x_mask_layer_exit_br_cmdtbl),
#endif
	SEQINFO_INIT(PANEL_FFC_SEQ, a55x_ffc_cmdtbl),
	SEQINFO_INIT(PANEL_DUMP_SEQ, a55x_dump_cmdtbl),
	SEQINFO_INIT(PANEL_CHECK_CONDITION_SEQ, a55x_check_condition_cmdtbl),
#ifdef CONFIG_USDM_FACTORY_DSC_CRC_TEST
	SEQINFO_INIT(PANEL_DECODER_TEST_SEQ, a55x_decoder_test_cmdtbl),
#endif
#ifdef CONFIG_USDM_FACTORY_CCD_TEST
	SEQINFO_INIT(PANEL_CCD_TEST_SEQ, a55x_ccd_test_cmdtbl),
#endif
#ifdef CONFIG_USDM_FACTORY_ECC_TEST
	SEQINFO_INIT(PANEL_ECC_TEST_SEQ, a55x_ecc_test_cmdtbl),
#endif
	SEQINFO_INIT(PANEL_DUMMY_SEQ, a55x_dummy_cmdtbl),
};

struct common_panel_info ana6710_a55x_panel_info = {
	.ldi_name = "ana6710",
	.name = "ana6710_a55x",
	.model = "AMS642DF01",
	.vendor = "SDC",
	.id = 0x800040,
	.rev = 0,
	.ddi_props = {
		.gpara = (DDI_SUPPORT_WRITE_GPARA | DDI_SUPPORT_READ_GPARA | DDI_SUPPORT_POINT_GPARA),
		.err_fg_recovery = false,
		.support_vrr = true,
		.dft_osc_freq = 181300,
		/* Todo the hs_clk must be synchronized with the value of LK,
		 * It must be changed to be read and set in the LK.
		 */
		.dft_dsi_freq = 1108000,
	},

	.ddi_ops = {
		.get_cell_id = ana6710_get_cell_id,
		.get_octa_id = ana6710_get_octa_id,
		.get_manufacture_code = ana6710_get_manufacture_code,
		.get_manufacture_date = ana6710_get_manufacture_date,
#ifdef CONFIG_USDM_FACTORY_ECC_TEST
		.ecc_test = ana6710_ecc_test,
#endif
#ifdef CONFIG_USDM_FACTORY_DSC_CRC_TEST
		.decoder_test = ana6710_decoder_test,
#endif
	},
#if defined(CONFIG_USDM_PANEL_DISPLAY_MODE)
	.common_panel_modes = &ana6710_a55x_display_modes,
#endif
	.mres = {
		.nr_resol = ARRAY_SIZE(ana6710_a55x_default_resol),
		.resol = ana6710_a55x_default_resol,
	},
	.vrrtbl = ana6710_a55x_default_vrrtbl,
	.nr_vrrtbl = ARRAY_SIZE(ana6710_a55x_default_vrrtbl),
	.maptbl = a55x_maptbl,
	.nr_maptbl = ARRAY_SIZE(a55x_maptbl),
	.seqtbl = a55x_seqtbl,
	.nr_seqtbl = ARRAY_SIZE(a55x_seqtbl),
	.rditbl = ana6710_rditbl,
	.nr_rditbl = ARRAY_SIZE(ana6710_rditbl),
	.restbl = ana6710_restbl,
	.nr_restbl = ARRAY_SIZE(ana6710_restbl),
	.dumpinfo = ana6710_dmptbl,
	.nr_dumpinfo = ARRAY_SIZE(ana6710_dmptbl),

#ifdef CONFIG_USDM_MDNIE
	.mdnie_tune = &ana6710_a55x_mdnie_tune,
#endif
	.panel_dim_info = {
		[PANEL_BL_SUBDEV_TYPE_DISP] = &ana6710_a55x_panel_dimming_info,
#ifdef CONFIG_USDM_PANEL_AOD_BL
		[PANEL_BL_SUBDEV_TYPE_AOD] = &ana6710_a55x_panel_aod_dimming_info,
#endif
	},
#ifdef CONFIG_USDM_PANEL_RCD
	.rcd_data = &ana6710_a55x_rcd,
#endif
};

#endif /* __ANA6710_A55X_PANEL_H__ */
