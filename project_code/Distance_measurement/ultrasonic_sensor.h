 /******************************************************************************
 *
 * Module: Ultrasonic sensor
 *
 * File Name:   ultrasonic_sensor.h
 *
 * Description: Header file for the AVR Ultrasonic driver
 *
 * Author: Narden Sobhy Shaker
 *
 *******************************************************************************/

#ifndef ULTRASONIC_SENSOR_H_
#define ULTRASONIC_SENSOR_H_

#include "std_types.h"

/*******************************************************************************
 *                         Types Declaration                                   *
 *******************************************************************************/

#define ULTRASONIC_TRIGGER_PORT_ID            PORTB_ID
#define ULTRASONIC_TRIGGER_PIN_ID             PIN5_ID


/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description : Function to initialize the Ultrasonic driver
 * 	1. Initialize the ICU driver.
 * 	2. Setup the ICU call back function.
 * 	3. Setup the Trigger pin direction by use the GPIO driver.
 */
void Ultrasonic_init(void);

/*
 * Description : Function used to :
 * 	1. Send the trigger pulse by using Ultrasonic_Trigger function.
 * 	2. Start the measurements by the ICU from this moment.
 */
uint16 Ultrasonic_readDistance(void);


#endif /* ULTRASONIC_SENSOR_H_ */
