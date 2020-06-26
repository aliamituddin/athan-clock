/******************************************************************************

 @file  bsp_spi.h

 @brief Common API for SPI access

 Group: CMCU, LPRF
 Target Device: CC2652

 ******************************************************************************
 
 Copyright (c) 2014-2018, Texas Instruments Incorporated
 All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions
 are met:

 *  Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.

 *  Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.

 *  Neither the name of Texas Instruments Incorporated nor the names of
    its contributors may be used to endorse or promote products derived
    from this software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

 ******************************************************************************
 Release Name: simplelink_cc26x2_sdk_2_20_00_36
 Release Date: 2018-06-27 10:07:01
 *****************************************************************************/
#ifndef BSP_SPI_H
#define BSP_SPI_H

#include <stdlib.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C"
{
#endif

/*******************************************************************************
 * @fn          bspSpiOpen
 *
 * @brief       Initialize SPI interface
 *
 * @param       None
 *
 * @return      None
 */
extern void bspSpiOpen(uint32_t bitRate, uint32_t clkPin);

/*******************************************************************************
 * @fn          bspSpiClose
 *
 * @brief       Close SPI interface
 *
 * @param       None
 *
 * @return      None
 */
extern void bspSpiClose(void);

/*******************************************************************************
 * @fn          bspSpiFlush
 *
 * @brief       Clear data from SPI interface
 *
 * @param       None
 *
 * @return      None
 */
extern void bspSpiFlush(void);

/*******************************************************************************
 * @fn          bspSpiRead
 *
 * @brief       Read from an SPI device
 *
 * @param       buf     - pointer to data buffer
 * @param       length - data length
 *
 * @return      true when successful else
 *              false
 */
extern int bspSpiRead( uint8_t *buf, size_t length);

/*******************************************************************************
 * @fn          bspSpiWrite
 *
 * @brief       Write to an SPI device
 *
 * @param       buf     - pointer to data buffer
 * @param       length - data length
 *
 * @return      true when successful else
 *              false
 */
extern int bspSpiWrite(const uint8_t *buf, size_t length);

#ifdef __cplusplus
}
#endif

#endif /* BSP_SPI_H */