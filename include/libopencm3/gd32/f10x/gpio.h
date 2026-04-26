/** @defgroup gpio_defines GPIO Defines
 *
 * @brief <b>Defined Constants and Types for the GD32F10x GPIO</b>
 *
 * @ingroup GD32F10x_defines
 *
 * @version 1.0.0
 *
 * LGPL License Terms @ref lgpl_license
 */
/*
 * GD32F10x GPIO is the *legacy v1 layout* — combined CRL/CRH MODE+CNF
 * registers, not the modern MODER/PUPDR/AFR split. Forward to
 * stm32/f1/gpio.h. No header guard; the forwarded file has its own.
 */
#include <libopencm3/stm32/f1/gpio.h>
