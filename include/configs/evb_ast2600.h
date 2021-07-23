/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (c) Aspeed Technology Inc.
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#include <configs/aspeed-common.h>

#define CONFIG_SYS_UBOOT_BASE		CONFIG_SYS_TEXT_BASE

/* Memory Info */
#define CONFIG_SYS_LOAD_ADDR		0x83000000

/* Misc */
#define CONFIG_EXTRA_ENV_SETTINGS \
	"verify=yes\0"	\
	"spi_dma=yes\0" \
	""

#endif	/* __CONFIG_H */
