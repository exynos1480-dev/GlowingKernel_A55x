/*
 * s2mpu16.h - Driver for the s2mpu16
 *
 *  Copyright (C) 2021 Samsung Electrnoics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef __s2mpu16_MFD_H__
#define __s2mpu16_MFD_H__
#include <linux/platform_device.h>
#include <linux/regmap.h>

#define MFD_DEV_NAME "s2mpu16"
/**
 * sec_regulator_data - regulator data
 * @id: regulator id
 * @initdata: regulator init data (contraints, supplies, ...)
 */
struct s2mpu16_regulator_data {
	int id;
	struct regulator_init_data *initdata;
	struct device_node *reg_node;
};

/*
 * sec_opmode_data - regulator operation mode data
 * @id: regulator id
 * @mode: regulator operation mode
 */
struct sec_opmode_data {
	int id;
	unsigned int mode;
};

/*
 * samsung regulator operation mode
 * PMIC_OPMODE_OFF	Regulator always OFF
 * PMIC_OPMODE_ON	Regulator always ON
 * PMIC_OPMODE_LPM	Regulator is on in low-power mode
 * PMIC_OPMODE_VGPIO	Regulator is changed by vGPIO pin
 *			If vGPIO is high, regulator is on
 *			If vGPIO is low, regulator is off
 */
enum sec_opmode {
	PMIC_OPMODE_OFF,
	PMIC_OPMODE_VGPIO,
	PMIC_OPMODE_LPM,
	PMIC_OPMODE_ON,
	PMIC_OPMODE_AUTO = 0x4,
	PMIC_OPMODE_FCCM = 0x8,
};

struct s2mpu16_platform_data {
	struct s2mpu16_regulator_data *regulators;
	struct sec_opmode_data *opmode;
	struct mfd_cell *sub_devices;
	int num_regulators;
	int num_rdata;
	int num_subdevs;
	bool wakeup;

	bool g3d_en;

	/* IRQ */
	int irq_base;

	int (*cfg_pmic_irq)(void);
	int device_type;
	int ono;
	int buck_ramp_delay;

	/* wtsr */
	int wtsr_en;
};

struct s2mpu16 {
	struct regmap *regmap;
};
#endif /* __s2mpu16_MFD_H__ */
