/** @defgroup timer_defines TIMER Defines
 *
 * @brief <b>Defined Constants and Types for the GD32F10x Timer</b>
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

#ifndef LIBOPENCM3_TIMER_H
#define LIBOPENCM3_TIMER_H

/* GD32F10x timers are register-compatible with STM32F1. Empirically validated
 * by regtrace v0.5 (decisions/v0.5/TIMER.md): same TIM1 register layout, same
 * bit positions, same final-state behaviour as STM32F1 across a 6-impl
 * all-pairs comparison (gd-spl, libopencm3, cube-ll on F0/F1/F4 + GD F1x0/F10x).
 */
#include <libopencm3/stm32/common/timer_common_all.h>

#endif
