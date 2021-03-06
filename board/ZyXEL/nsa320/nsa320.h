/*
 * Copyright (C) 2012  Peter Schildmann <linux@schildmann.info>
 *
 * Based on guruplug.h originally written by
 * Siddarth Gore <gores@marvell.com>
 * (C) Copyright 2009
 * Marvell Semiconductor <www.marvell.com>
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301 USA
 */

#ifndef __NSA320_H
#define __NSA320_H

/* low GPIO's */
#define HDD2_GREEN_LED		(1 << 12)
#define HDD2_RED_LED		(1 << 13)
#define USB_GREEN_LED		(1 << 15)
#define USB_POWER		(1 << 21)
#define SYS_GREEN_LED		(1 << 28)
#define SYS_ORANGE_LED		(1 << 29)

#define NSA320_OE_LOW		(~(HDD2_GREEN_LED | HDD2_RED_LED | \
				   USB_GREEN_LED | USB_POWER | \
				   SYS_GREEN_LED | SYS_ORANGE_LED))
#define NSA320_VAL_LOW		(SYS_GREEN_LED)

/* high GPIO's */
#define COPY_GREEN_LED		(1 << 7)
#define COPY_RED_LED		(1 << 8)
#define HDD1_GREEN_LED		(1 << 9)
#define HDD1_RED_LED		(1 << 10)

#define NSA320_OE_HIGH		(~(COPY_GREEN_LED | COPY_RED_LED | \
				   HDD1_GREEN_LED | HDD1_RED_LED))
#define NSA320_VAL_HIGH		(0)

/* PHY related */
#define MV88E1318_MAC_CTRL_REG		21
#define MV88E1318_PGADR_REG		22
#define MV88E1318_RGMII_TXTM_CTRL	(1 << 4)
#define MV88E1318_RGMII_RXTM_CTRL	(1 << 5)

#endif /* __NSA320_H */
