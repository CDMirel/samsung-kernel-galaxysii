/* linux/arch/arm/mach-s5pv310/include/mach/map.h
 *
 * Copyright (c) 2010 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * S5PV310 - Memory map definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_MAP_H
#define __ASM_ARCH_MAP_H __FILE__

#include <plat/map-base.h>

/* */
#define S3C_UART_OFFSET			(0x10000)

#include <plat/map-s5p.h>

#define S5PV310_PA_SROM3		(0x07000000)

#define S5PV310_PA_CHIPID		(0x10000000)
#define S5P_PA_CHIPID			S5PV310_PA_CHIPID

#define S5PV310_PA_SYSCON		(0x10020000)
#define S5P_PA_SYSCON			S5PV310_PA_SYSCON

#define S5PV310_PA_CMU			(0x10030000)
#define S5PV310_VA_CMU			S3C_ADDR(0x00940000)

#define S5PV310_PA_RTC			(0x10070000)

#define S5PV310_PA_COMBINER		(0x10448000)

#define S5PV310_PA_COREPERI		(0x10500000)
#define S5PV310_PA_GIC_CPU		(0x10500100)
#define S5PV310_PA_TWD			(0x10500600)
#define S5PV310_PA_GIC_DIST		(0x10501000)
#define S5PV310_PA_L2CC			(0x10502000)

#define S5PV310_PA_MDMA0		0x10800000
#define S5PV310_PA_MDMA1		0x12840000
#define S5PV310_PA_PDMA0		0x12680000
#define S5PV310_PA_PDMA1		0x12690000

#define S5PV310_PA_GPIO			(0x11000000)
#define S5P_PA_GPIO			S5PV310_PA_GPIO

#define S5PV310_PA_GPIO2		(0x11400000)
#define S5PV310_VA_GPIO2		S3C_ADDR(0x00930000)

#define S5PV310_PA_SROMC		(0x12570000)

#define S5PV310_PA_MFC			(0x13400000)
#define S5P_PA_MFC			S5PV310_PA_MFC
#define S5P_SZ_MFC			SZ_64K

#define S5PV310_PA_UART			(0x13800000)

#define S5P_PA_UART(x)			(S5PV310_PA_UART + ((x) * S3C_UART_OFFSET))
#define S5P_PA_UART0			S5P_PA_UART(0)
#define S5P_PA_UART1			S5P_PA_UART(1)
#define S5P_PA_UART2			S5P_PA_UART(2)
#define S5P_PA_UART3			S5P_PA_UART(3)
#define S5P_PA_UART4			S5P_PA_UART(4)

#define S5P_SZ_UART			SZ_256

#define S5PV310_PA_HSOTG		(0x12480000)
#define S5P_PA_OTG			S5PV310_PA_HSOTG
#define S5P_SZ_OTG			SZ_1M

#define S5PV310_PA_OTGSFR		(0x125B0000)
#define S5P_PA_OTGSFR			S5PV310_PA_OTGSFR

#define S5PV310_PA_USB_EHCI		(0x12580000)
#define S5P_PA_USB_EHCI			S5PV310_PA_USB_EHCI
#define S5P_SZ_USB_EHCI			SZ_1M

#define S5PV310_PA_USB_OHCI		(0x12590000)
#define S5P_PA_USB_OHCI			S5PV310_PA_USB_OHCI
#define S5P_SZ_USB_OHCI			SZ_1M

#define S5PV310_PA_IIC0			(0x13860000)
#define S5PV310_PA_IIC1			(0x13870000)
#define S5PV310_PA_IIC2			(0x13880000)
#define S5PV310_PA_IIC3			(0x13890000)
#define S5PV310_PA_IIC4			(0x138A0000)
#define S5PV310_PA_IIC5			(0x138B0000)
#define S5PV310_PA_IIC6			(0x138C0000)
#define S5PV310_PA_IIC7			(0x138D0000)

#define S5PV310_PA_TIMER		(0x139D0000)
#define S5P_PA_TIMER			S5PV310_PA_TIMER

#define S5PV310_PA_SDRAM		(0x40000000)
#define S5P_PA_SDRAM			S5PV310_PA_SDRAM

/* compatibiltiy defines. */
#define S3C_PA_UART			S5PV310_PA_UART
#define S3C_PA_IIC			S5PV310_PA_IIC0
#define S3C_PA_IIC1			S5PV310_PA_IIC1
#define S3C_PA_IIC2			S5PV310_PA_IIC2
#define S3C_PA_IIC3			S5PV310_PA_IIC3
#define S3C_PA_IIC4			S5PV310_PA_IIC4
#define S3C_PA_IIC5			S5PV310_PA_IIC5
#define S3C_PA_IIC6			S5PV310_PA_IIC6
#define S3C_PA_IIC7			S5PV310_PA_IIC7
#define	S3C_PA_RTC			S5PV310_PA_RTC

#endif /* __ASM_ARCH_MAP_H */