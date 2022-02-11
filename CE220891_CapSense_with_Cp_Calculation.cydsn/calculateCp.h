/* ========================================
 *
 * Copyright Cypress/Infineon, 2021
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF Cypress/Infineon.
 *
 * Date:        19-Aug-2021
 * Author:      David Waskevich
 * Filename:    calculateCp.h
 *
 * ========================================
*/
#include <cytypes.h>
#include <project.h>

#define MODULATOR_CLK_FREQ      (CYDEV_BCLK__HFCLK__KHZ / CapSense_CSD_SCANSPEED_DIVIDER)
    
/*******************************************************************************
* Function Prototype
*******************************************************************************/
uint32 calculateCp(uint32 widgetId, uint32 sensorElement);    
    
/* [] END OF FILE */
