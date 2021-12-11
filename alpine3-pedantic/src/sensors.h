/**
 * @file sensors.h
 * @brief Implementation of the platform specific command line interface.
 *
 * @note the gPTP protocol requires the following functions:
 */
#ifndef SENSORS_H
#define SENSORS_H

#include <stdint.h>

#include "stdLib.h"

#define NR_OF_SENSORS 3

/**
 * @brief Loops through all the sensor and fills the array of readings with 
 * the most updated sensor readings
 *
 * @param sensorReadings: Array of sensor readings
 * @return E_OK = 0
 */
typedef enum {
    SENSOR_OK = 0,
    SENSOR_NOK
} sensorState_en;

/**
 * @brief Loops through all the sensor and fills the array of readings with 
 * the most updated sensor readings
 *
 * @param sensorReadings: Array of sensor readings
 * @return E_OK = 0
 */
typedef struct sensor_t {
    sensorState_en state;
    uint32_t reading;
} sensor_t;

/**
 * @brief Loops through all the sensor and fills the array of readings with 
 * the most updated sensor readings
 *
 * @param sensorReadings: Array of sensor readings
 * @return E_OK = 0
 */
returnType_en readSensors(sensor_t sensorReadings[]);
#endif