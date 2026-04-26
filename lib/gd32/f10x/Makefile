##
## This file is part of the libopencm3 project.
##
## Copyright (C) 2026 regtrace contributors
##
## This library is free software: you can redistribute it and/or modify
## it under the terms of the GNU Lesser General Public License as published by
## the Free Software Foundation, either version 3 of the License, or
## (at your option) any later version.
##
## This library is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU Lesser General Public License for more details.
##
## You should have received a copy of the GNU Lesser General Public License
## along with this library.  If not, see <http://www.gnu.org/licenses/>.
##

LIBNAME		= libopencm3_gd32f10x
SRCLIBDIR	?= ../..

CC		= $(PREFIX)gcc
AR		= $(PREFIX)ar
TGT_CFLAGS	= -Os \
		  -Wall -Wextra -Wimplicit-function-declaration \
		  -Wredundant-decls -Wmissing-prototypes -Wstrict-prototypes \
		  -Wundef -Wshadow \
		  -I../../../include -fno-common \
		  -mcpu=cortex-m3 $(FP_FLAGS) -mthumb -Wstrict-prototypes \
		  -ffunction-sections -fdata-sections -MD -DGD32F10X
TGT_CFLAGS      += $(DEBUG_FLAGS)
ARFLAGS		= rcs

# Initial v0.5 stub: TIMER + IWDG, validated as register-compatible with
# STM32F1 by regtrace (see decisions/v0.5/{TIMER,IWDG}.md). Other peripherals
# (GPIO, RCC, FLASH, USART, DMA, I2C, ADC) follow in subsequent PRs as their
# share-or-split decisions are made.
OBJS += gd32f10x_rcc_helpers.o
OBJS += iwdg_common_all.o
OBJS += timer_common_all.o timer_common_f0234.o
OBJS += dma_common_l1f013.o
OBJS += usart_common_all.o usart_common_f124.o
OBJS += adc_common_v1.o
OBJS += i2c_common_v1.o
OBJS += gpio.o gpio_common_all.o

# stm32/f1 contributes the v1-family gpio.c (gpio_set_mode etc.) — required
# by the GD32F10x port since the v1 GPIO is family-specific code, not in
# stm32/common/.
VPATH += ../:../../cm3:../common:../../stm32/common:../../stm32/f1

include ../../Makefile.include
