/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2026 regtrace contributors
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

/**@{*/

#include <libopencm3/stm32/rcc.h>

/* Provisional RCC backing storage for the GD32F10x stub. The full RCC
 * driver from stm32/f1/rcc.c isn't pulled into the gd32/f10x stub yet
 * (RCC share-or-split decision still pending); these globals plus the
 * peripheral-clock helpers below are the minimum needed for usart/i2c/
 * timer common drivers to compile and link.
 */

uint32_t rcc_apb1_frequency = 8000000;
uint32_t rcc_apb2_frequency = 8000000;
uint32_t rcc_ahb_frequency  = 8000000;

uint32_t rcc_get_usart_clk_freq(uint32_t usart)
{
	if (usart == USART1_BASE) {
		return rcc_apb2_frequency;
	}
	return rcc_apb1_frequency;
}

uint32_t rcc_get_timer_clk_freq(uint32_t timer)
{
	if (timer == TIM1_BASE || timer == TIM8_BASE) {
		return rcc_apb2_frequency;
	}
	return rcc_apb1_frequency;
}

uint32_t rcc_get_i2c_clk_freq(uint32_t i2c __attribute__((unused)))
{
	return rcc_apb1_frequency;
}

uint32_t rcc_get_spi_clk_freq(uint32_t spi)
{
	if (spi == SPI1_BASE) {
		return rcc_apb2_frequency;
	}
	return rcc_apb1_frequency;
}

/**@}*/
