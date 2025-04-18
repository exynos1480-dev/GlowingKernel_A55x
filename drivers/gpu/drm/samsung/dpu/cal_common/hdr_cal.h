/* SPDX-License-Identifier: GPL-2.0-only
 *
 * Copyright (c) 2020 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * Header file for SAMSUNG DQE CAL
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __SAMSUNG_HDR_CAL_H__
#define __SAMSUNG_HDR_CAL_H__

#include <linux/types.h>

struct hdr_regs {
	void __iomem *regs;
	phys_addr_t addr;
	size_t size;
};

enum hdr_hw_type {
	HDR_HW_TYPE_NONE = 0,	// none
	HDR_HW_TYPE_BASE,	// S.LSI
	HDR_HW_TYPE_CUSTOM,	// custom
	HDR_HW_TYPE_DUMMY,	// dummy
	HDR_HW_TYPE_MAX,
};

void __hdr_dump(u32 id, struct hdr_regs	*base_regs);
bool hdr_reg_verify(u32 id, u32 hw_type, u32 start_offset, u32 length);
void hdr_reg_set_lut(u32 id, u32 hw_type, u32 offset, const u32 lut);
void hdr_reg_set_multiple_lut(u32 id, u32 hw_type, u32 offset,
					u32 length, const u32 *lut);
void hdr_regs_desc_init(u32 id, void __iomem *regs, const char *name,
		u32 hw_type);
bool hdr_reg_check_hw_type(u32 id, u32 hw_type);
#endif /* __SAMSUNG_HDR_CAL_H__ */
