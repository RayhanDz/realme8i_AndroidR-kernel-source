/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020 MediaTek Inc.
 */
/*[File]            : wf_wfdma_host_dma0.h
 *[Revision time]   : Tue Sep  8 20:42:13 2020
 *[Description]     : This file is auto generated by CODA
 *[Copyright]       : Copyright (C) 2020 Mediatek Incorportion.
 *                    All rights reserved.
 */

#ifndef __WF_WFDMA_HOST_DMA0_REGS_H__
#define __WF_WFDMA_HOST_DMA0_REGS_H__

#ifdef __cplusplus
extern "C" {
#endif


/****************************************************************************
 *
 *                     WF_WFDMA_HOST_DMA0 CR Definitions
 *
 ****************************************************************************
 */

#define WF_WFDMA_HOST_DMA0_BASE				\
	(0x18024000 + CONN_INFRA_REMAPPING_OFFSET)

#define WF_WFDMA_HOST_DMA0_WPDMA_DBG_IDX_ADDR	\
	(WF_WFDMA_HOST_DMA0_BASE + 0x124)
#define WF_WFDMA_HOST_DMA0_WPDMA_DBG_PROBE_ADDR \
	(WF_WFDMA_HOST_DMA0_BASE + 0x128)
#define WF_WFDMA_HOST_DMA0_HOST_INT_STA_ADDR	\
	(WF_WFDMA_HOST_DMA0_BASE + 0x200)
#define WF_WFDMA_HOST_DMA0_HOST_INT_ENA_ADDR	\
	(WF_WFDMA_HOST_DMA0_BASE + 0X204)
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR	\
	(WF_WFDMA_HOST_DMA0_BASE + 0x208)
#define WF_WFDMA_HOST_DMA0_WPDMA_RST_DTX_PTR_ADDR	\
	(WF_WFDMA_HOST_DMA0_BASE + 0x20C)
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL0_ADDR	\
	(WF_WFDMA_HOST_DMA0_BASE + 0x300)
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL1_ADDR	\
	(WF_WFDMA_HOST_DMA0_BASE + 0x304)
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL2_ADDR	\
	(WF_WFDMA_HOST_DMA0_BASE + 0x308)
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_CTRL3_ADDR	\
	(WF_WFDMA_HOST_DMA0_BASE + 0x30c)
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_CTRL0_ADDR	\
	(WF_WFDMA_HOST_DMA0_BASE + 0x310)
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING15_CTRL0_ADDR	\
	(WF_WFDMA_HOST_DMA0_BASE + 0x3f0)
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING16_CTRL0_ADDR	\
	(WF_WFDMA_HOST_DMA0_BASE + 0x400)
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL0_ADDR	\
	(WF_WFDMA_HOST_DMA0_BASE + 0x500)
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL1_ADDR	\
	(WF_WFDMA_HOST_DMA0_BASE + 0x504)
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL2_ADDR	\
	(WF_WFDMA_HOST_DMA0_BASE + 0x508)
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_CTRL3_ADDR	\
	(WF_WFDMA_HOST_DMA0_BASE + 0x50c)
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_CTRL0_ADDR	\
	(WF_WFDMA_HOST_DMA0_BASE + 0x510)
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_CTRL0_ADDR	\
	(WF_WFDMA_HOST_DMA0_BASE + 0x520)
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_CTRL0_ADDR	\
	(WF_WFDMA_HOST_DMA0_BASE + 0x530)
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING0_EXT_CTRL_ADDR \
	(WF_WFDMA_HOST_DMA0_BASE + 0x600)
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING1_EXT_CTRL_ADDR \
	(WF_WFDMA_HOST_DMA0_BASE + 0x604)
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING2_EXT_CTRL_ADDR \
	(WF_WFDMA_HOST_DMA0_BASE + 0x608)
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING3_EXT_CTRL_ADDR \
	(WF_WFDMA_HOST_DMA0_BASE + 0x60C)
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING4_EXT_CTRL_ADDR \
	(WF_WFDMA_HOST_DMA0_BASE + 0x610)
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING5_EXT_CTRL_ADDR \
	(WF_WFDMA_HOST_DMA0_BASE + 0x614)
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING15_EXT_CTRL_ADDR	\
	(WF_WFDMA_HOST_DMA0_BASE + 0x63c)
#define WF_WFDMA_HOST_DMA0_WPDMA_TX_RING16_EXT_CTRL_ADDR	\
	(WF_WFDMA_HOST_DMA0_BASE + 0x640)
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING0_EXT_CTRL_ADDR \
	(WF_WFDMA_HOST_DMA0_BASE + 0x680)
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING1_EXT_CTRL_ADDR \
	(WF_WFDMA_HOST_DMA0_BASE + 0x684)
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING2_EXT_CTRL_ADDR \
	(WF_WFDMA_HOST_DMA0_BASE + 0x688)
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING3_EXT_CTRL_ADDR \
	(WF_WFDMA_HOST_DMA0_BASE + 0x68C)
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING4_EXT_CTRL_ADDR \
	(WF_WFDMA_HOST_DMA0_BASE + 0x690)
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING5_EXT_CTRL_ADDR \
	(WF_WFDMA_HOST_DMA0_BASE + 0x694)
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING6_EXT_CTRL_ADDR \
	(WF_WFDMA_HOST_DMA0_BASE + 0x698)
#define WF_WFDMA_HOST_DMA0_WPDMA_RX_RING7_EXT_CTRL_ADDR \
	(WF_WFDMA_HOST_DMA0_BASE + 0x69C)
#define WF_WFDMA_HOST_DMA0_PDA_CONFG_ADDR	\
	(WF_WFDMA_HOST_DMA0_BASE + 0x80C)

#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_DISP_BASE_PTR_CHAIN_EN_ADDR \
	WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_ADDR
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_DISP_BASE_PTR_CHAIN_EN_MASK \
	0x00008000
#define WF_WFDMA_HOST_DMA0_WPDMA_GLO_CFG_CSR_DISP_BASE_PTR_CHAIN_EN_SHFT 15

#ifdef __cplusplus
}
#endif

#endif /* __WF_WFDMA_HOST_DMA0_REGS_H__ */