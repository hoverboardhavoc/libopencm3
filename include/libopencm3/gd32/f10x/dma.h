/** @defgroup dma_defines DMA Defines
 *
 * @brief <b>Defined Constants and Types for the GD32F10x DMA Controller</b>
 *
 * @ingroup GD32F10x_defines
 *
 * @version 1.0.0
 *
 * LGPL License Terms @ref lgpl_license
 */
/*
 * GD32F10x DMA shares the dma_common_l1f013 family. Forward to
 * stm32/f1/dma.h (which defines LIBOPENCM3_DMA_H — required for the
 * common header's #ifdef gate to take — then pulls in
 * dma_common_l1f013.h). No guard on this side; the forwarded file
 * provides one.
 */
#include <libopencm3/stm32/f1/dma.h>
