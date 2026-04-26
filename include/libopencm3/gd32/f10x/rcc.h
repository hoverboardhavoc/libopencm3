/** @defgroup rcc_defines RCC Defines
 *
 * @brief <b>Defined Constants and Types for the GD32F10x Reset and Clock
 * Control</b>
 *
 * @ingroup GD32F10x_defines
 *
 * @version 1.0.0
 *
 * LGPL License Terms @ref lgpl_license
 */
/*
 * This file is part of the libopencm3 project.
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

#ifndef LIBOPENCM3_RCC_H
#define LIBOPENCM3_RCC_H

/* The GD32F10x RCU is largely STM32F1-compatible at the register level. This
 * v0.5 stub forwards to stm32/f1/rcc.h to unblock TIMER + IWDG support; a
 * dedicated regtrace RCC vector + decisions/<version>/RCC.md analysis is
 * planned for a follow-up release before this becomes load-bearing for
 * GD32F10x clock-tree code. Until then, downstream code using anything
 * beyond the basic clock-enable bits should validate against gd-spl traces.
 */
#include <libopencm3/stm32/f1/rcc.h>

#endif
