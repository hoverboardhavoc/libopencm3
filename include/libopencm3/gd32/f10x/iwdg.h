/** @defgroup iwdg_defines IWDG Defines
 *
 * @brief <b>Defined Constants and Types for the GD32F10x Independent
 * Watchdog Timer</b>
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

#ifndef LIBOPENCM3_IWDG_H
#define LIBOPENCM3_IWDG_H

/* GD32F10x IWDG (vendor name FWDGT) is register-compatible with STM32F1 IWDG.
 * Empirically validated by regtrace v0.5 (decisions/v0.5/IWDG.md): same KR
 * magic constants (0x5555 / 0xAAAA / 0xCCCC), same PR/RLR/SR layout. Final
 * state matches across all 6 implementations compared (gd-spl, libopencm3,
 * cube-ll). The F10x port uses the legacy iwdg_common_all header (matching
 * STM32F1) — not iwdg_common_v2 (which adds WINR/EWCR for newer parts).
 */
#include <libopencm3/stm32/common/iwdg_common_all.h>

#endif
