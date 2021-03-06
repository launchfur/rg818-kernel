/*
 * Allwinner sun50iw10p1 SoCs clk driver.
 *
 * Copyright(c) 2012-2016 Allwinnertech Co., Ltd.
 * Author: huanghuafeng <huafenghuang@allwinnertech.com>
 *
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

/* the clk table is not right ,please fix me when ic come back */

#include "clk-sun50iw11.h"
struct sunxi_clk_factor_freq factor_pllcpu_tbl[] = {
PLLCPU(16,    408000000U),
PLLCPU(17,    432000000U),
PLLCPU(18,    456000000U),
PLLCPU(19,    480000000U),
PLLCPU(20,    504000000U),
PLLCPU(21,    528000000U),
PLLCPU(22,    552000000U),
PLLCPU(23,    576000000U),
PLLCPU(24,    600000000U),
PLLCPU(25,    624000000U),
PLLCPU(26,    648000000U),
PLLCPU(27,    672000000U),
PLLCPU(28,    696000000U),
PLLCPU(29,    720000000U),
PLLCPU(30,    744000000U),
PLLCPU(31,    768000000U),
PLLCPU(32,    792000000U),
PLLCPU(33,    816000000U),
PLLCPU(34,    840000000U),
PLLCPU(35,    864000000U),
PLLCPU(36,    888000000U),
PLLCPU(37,    912000000U),
PLLCPU(38,    936000000U),
PLLCPU(39,    960000000U),
PLLCPU(40,    984000000U),
PLLCPU(41,    1008000000U),
PLLCPU(42,    1032000000U),
PLLCPU(43,    1056000000U),
PLLCPU(44,    1080000000U),
PLLCPU(45,    1104000000U),
PLLCPU(46,    1128000000U),
PLLCPU(47,    1152000000U),
PLLCPU(48,    1176000000U),
PLLCPU(49,    1200000000U),
PLLCPU(50,    1224000000U),
PLLCPU(51,    1248000000U),
PLLCPU(52,    1272000000U),
PLLCPU(53,    1296000000U),
PLLCPU(54,    1320000000U),
PLLCPU(55,    1344000000U),
PLLCPU(56,    1368000000U),
PLLCPU(57,    1392000000U),
PLLCPU(58,    1416000000U),
PLLCPU(59,    1440000000U),
PLLCPU(60,    1464000000U),
PLLCPU(61,    1488000000U),
PLLCPU(62,    1512000000U),
PLLCPU(63,    1536000000U),
PLLCPU(64,    1560000000U),
PLLCPU(65,    1584000000U),
PLLCPU(66,    1608000000U),
PLLCPU(67,    1632000000U),
PLLCPU(68,    1656000000U),
PLLCPU(69,    1680000000U),
PLLCPU(70,    1704000000U),
PLLCPU(71,    1728000000U),
PLLCPU(72,    1752000000U),
PLLCPU(73,    1776000000U),
PLLCPU(74,    1800000000U),
PLLCPU(75,    1824000000U),
PLLCPU(76,    1848000000U),
PLLCPU(77,    1872000000U),
PLLCPU(78,    1896000000U),
PLLCPU(79,    1920000000U),
PLLCPU(80,    1944000000U),
PLLCPU(81,    1968000000U),
PLLCPU(82,    1992000000U),
PLLCPU(83,    2016000000U),
PLLCPU(84,    2040000000U),
PLLCPU(85,    2064000000U),
PLLCPU(86,    2088000000U),
PLLCPU(87,    2112000000U),
PLLCPU(88,    2136000000U),
PLLCPU(89,    2160000000U),
PLLCPU(90,    2184000000U),
PLLCPU(91,    2208000000U),
PLLCPU(92,    2232000000U),
PLLCPU(93,    2256000000U),
PLLCPU(94,    2280000000U),
PLLCPU(95,    2304000000U),
PLLCPU(96,    2328000000U),
PLLCPU(97,    2352000000U),
PLLCPU(98,    2376000000U),
PLLCPU(99,    2400000000U),
PLLCPU(100,   2424000000U),
PLLCPU(101,   2448000000U),
PLLCPU(102,   2472000000U),
PLLCPU(103,   2496000000U),
PLLCPU(104,   2520000000U),
};

/* PLLPERIPH0(n, d1, d2, freq)	F_N8X8_D1V1X1_D2V0X1 */
struct sunxi_clk_factor_freq factor_pllperiph0_tbl[] = {
PLLPERIPH0(99,     0,     0,     600000000U),
};

static unsigned int pllcpu_max, pllperiph0_max;

#define PLL_MAX_ASSIGN(name) (pll##name##_max = \
	factor_pll##name##_tbl[ARRAY_SIZE(factor_pll##name##_tbl)-1].freq)

void sunxi_clk_factor_initlimits(void)
{
	PLL_MAX_ASSIGN(cpu);
	PLL_MAX_ASSIGN(periph0);
}
