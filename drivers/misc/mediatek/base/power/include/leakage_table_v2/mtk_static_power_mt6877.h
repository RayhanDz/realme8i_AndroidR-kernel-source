/*
 * Copyright (C) 2020 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef __MTK_STATIC_POWER_MT6877_H__
#define __MTK_STATIC_POWER_MT6877_H__

#define SPOWER_NOT_READY 1

#define WITHOUT_LKG_EFUSE

#define PRECISE_NODE

/* mv, "Leakage domain" */
#define V_OF_FUSE_CPU 900 /* BCPU/LCPU/MCPU */
#define V_OF_FUSE_GPU 800 /* GPU */
#define V_OF_FUSE_VCORE 725 /* SOC_ON_Total */
#define V_OF_FUSE_MODEM 825 /* MODEM */
#define V_OF_FUSE_VPU 775 /* VPU(APU) */
#define V_OF_FUSE_VSRAM_PROC12 1000 /* VSRAM_BCPU */
#define V_OF_FUSE_VSRAM_PROC11 1000 /* VSRAM_LCPU */
#define V_OF_FUSE_VSRAM_OTHERS 750 /* VSRAM_SOC */
#define V_OF_FUSE_ADSP 800 /* ADSP */
#define V_OF_FUSE_VSRAM_GPU 800 /* VSRAM_GPU */
#define V_OF_FUSE_VSRAM_VPU_MDLA 800 /* VSRAM_(VPU+MDLA) */
#define V_OF_FUSE_VSRAM_MODEM 825 /* VSRAM_MODEM */
#define V_OF_FUSE_VCORE_OFF 550 /* SOC _OFF_Total */

/* "ATE Test condition" */
#define T_OF_FUSE 30

/* devinfo offset for each bank */
/* CCI use LL leakage */
/* "Efuse_address" */
#define DEVINFO_IDX_LL 137 //0x11C107BC[15:8]
#define DEVINFO_IDX_L 137 //0x11C107BC[7:0]
#define DEVINFO_IDX_CCI 136 //0x11C107B8[31:24]
#define DEVINFO_IDX_GPU 135 //0x11C107B4[31:24]
#define DEVINFO_IDX_VCORE 135 //0x11C107B4[23:16]
#define DEVINFO_IDX_MODEM 135 //0x11C107B4[7:0]
#define DEVINFO_IDX_VPU 136 //0x11C107B8[15:8]
#define DEVINFO_IDX_VSRAM_PROC12 138 //0x11C107C0[31:24]
#define DEVINFO_IDX_VSRAM_PROC11 138 //0x11C107C0[23:16]
#define DEVINFO_IDX_VSRAM_OTHERS 137 //0x11C107BC[31:24]
#define DEVINFO_IDX_ADSP 137 //0x11C107B8[23:16]
#define DEVINFO_IDX_VSRAM_GPU 138 //0x11C107C0[15:8]
#define DEVINFO_IDX_VSRAM_VPU_MDLA 138 //0x11C107C0[7:0]
#define DEVINFO_IDX_VSRAM_MODEM 139 //0x11C107C4[7:0]
#define DEVINFO_IDX_VCORE_OFF 137 //0x11C107BC[23:16]

#define DEVINFO_OFF_LL 0
#define DEVINFO_OFF_L 8
#define DEVINFO_OFF_CCI 24
#define DEVINFO_OFF_GPU 24
#define DEVINFO_OFF_VCORE 16
#define DEVINFO_OFF_MODEM 8
#define DEVINFO_OFF_VPU 8
#define DEVINFO_OFF_VSRAM_PROC12 24
#define DEVINFO_OFF_VSRAM_PROC11 16
#define DEVINFO_OFF_VSRAM_OTHERS 24
#define DEVINFO_OFF_ADSP 24
#define DEVINFO_OFF_VSRAM_GPU 8
#define DEVINFO_OFF_VSRAM_VPU_MDLA 0
#define DEVINFO_OFF_VSRAM_MODEM 0
#define DEVINFO_OFF_VCORE_OFF 16

/* default leakage value for each bank */
#define DEF_CPULL_LEAKAGE 0
#define DEF_CPUL_LEAKAGE 0
#define DEF_CCI_LEAKAGE 0
#define DEF_GPU_LEAKAGE 0
#define DEF_VCORE_LEAKAGE 0
#define DEF_MODEM_LEAKAGE 0
#define DEF_VPU_LEAKAGE 0
#define DEF_VSRAM_PROC12_LEAKAGE 0
#define DEF_VSRAM_PROC11_LEAKAGE 0
#define DEF_VSRAM_OTHERS_LEAKAGE 0
#define DEF_ADSP_LEAKAGE 0
#define DEF_VSRAM_GPU_LEAKAGE 0
#define DEF_VSRAM_VPU_MDLA_LEAKAGE 0
#define DEF_VSRAM_MODEM_LEAKAGE 0
#define DEF_VCORE_OFF_LEAKAGE 0

enum {
	MTK_SPOWER_CPULL,
	MTK_SPOWER_CPUL,
	MTK_SPOWER_CCI,
	MTK_SPOWER_GPU,
	MTK_SPOWER_VCORE,
	MTK_SPOWER_MODEM,
	MTK_SPOWER_VPU,
	MTK_SPOWER_VSRAM_PROC12,
	MTK_SPOWER_VSRAM_PROC11,
	MTK_SPOWER_VSRAM_OTHERS,
	MTK_SPOWER_VSRAM_GPU,
	MTK_SPOWER_VSRAM_VPU_MDLA,
	MTK_SPOWER_VSRAM_MODEM,
	MTK_SPOWER_VCORE_OFF,
	MTK_SPOWER_MAX
};

enum {
	MTK_LL_LEAKAGE,
	MTK_L_LEAKAGE,
	MTK_CCI_LEAKAGE,
	MTK_GPU_LEAKAGE,
	MTK_VCORE_LEAKAGE,
	MTK_MODEM_LEAKAGE,
	MTK_VPU_LEAKAGE,
	MTK_VSRAM_PROC12_LEAKAGE,
	MTK_VSRAM_PROC11_LEAKAGE,
	MTK_VSRAM_OTHERS_LEAKAGE,
	MTK_VSRAM_GPU_LEAKAGE,
	MTK_VSRAM_VPU_MDLA_LEAKAGE,
	MTK_VSRAM_MODEM_LEAKAGE,
	MTK_VCORE_OFF_LEAKAGE,
	MTK_LEAKAGE_MAX
};

/* record leakage information that read from efuse */
struct spower_leakage_info {
	const char *name;
	unsigned int devinfo_idx;
	unsigned int devinfo_offset;
	unsigned int value;
	unsigned int v_of_fuse;
	int t_of_fuse;
};

extern struct spower_leakage_info spower_lkg_info[MTK_SPOWER_MAX];

/* efuse mapping */
/* 3967 modify */
#define LL_DEVINFO_DOMAIN (BIT(MTK_SPOWER_CPULL))
#define L_DEVINFO_DOMAIN (BIT(MTK_SPOWER_CPUL))
#define CCI_DEVINFO_DOMAIN (BIT(MTK_SPOWER_CCI))
#define GPU_DEVINFO_DOMAIN (BIT(MTK_SPOWER_GPU))
#define VCORE_DEVINFO_DOMAIN (BIT(MTK_SPOWER_VCORE))
#define MODEM_DEVINFO_DOMAIN (BIT(MTK_SPOWER_MODEM))
#define VPU_DEVINFO_DOMAIN (BIT(MTK_SPOWER_VPU))
#define VSRAM_PROC12_DEVINFO_DOMAIN (BIT(MTK_SPOWER_VSRAM_PROC12))
#define VSRAM_PROC11_DEVINFO_DOMAIN (BIT(MTK_SPOWER_VSRAM_PROC11))
#define VSRAM_GPU_DEVINFO_DOMAIN (BIT(MTK_SPOWER_VSRAM_GPU))
#define VSRAM_OTHERS_DEVINFO_DOMAIN (BIT(MTK_SPOWER_VSRAM_OTHERS))
#define VSRAM_GPU_DEVINFO_DOMAIN (BIT(MTK_SPOWER_VSRAM_GPU))
#define VSRAM_VPU_MDLA_DEVINFO_DOMAIN (BIT(MTK_SPOWER_VSRAM_VPU_MDLA))
#define VSRAM_MODEM_DEVINFO_DOMAIN (BIT(MTK_SPOWER_VSRAM_MODEM))
#define VCORE_OFF_DEVINFO_DOMAIN (BIT(MTK_SPOWER_VCORE_OFF))

/* used to calculate total leakage that search from raw table */
/* #define DEFAULT_CORE_INSTANCE 4 */
#define DEFAULT_LL_CORE_INSTANCE 6
#define DEFAULT_L_CORE_INSTANCE 2
#define DEFAULT_INSTANCE 1

extern char *spower_name[];
extern char *leakage_name[];
extern int default_leakage[];
extern int devinfo_idx[];
extern int devinfo_offset[];
extern int devinfo_table[];

#endif
