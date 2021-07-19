/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright 2021 NXP
 */

#ifndef __ARCH_IMX8ULP_SYS_PROTO_H
#define __ARCH_NMX8ULP_SYS_PROTO_H

#include <asm/mach-imx/sys_proto.h>

extern unsigned long rom_pointer[];

ulong spl_romapi_raw_seekable_read(u32 offset, u32 size, void *buf);
ulong spl_romapi_get_uboot_base(u32 image_offset, u32 rom_bt_dev);
enum bt_mode get_boot_mode(void);
#endif
