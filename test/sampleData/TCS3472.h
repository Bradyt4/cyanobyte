/*
* Copyright (C) 2019 Google Inc.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* Auto-generated file for TCS3472 v0.1.0.
* Generated from peripherals/TCS3472.yaml using Cyanobyte Codegen v0.1.0
* Class for TCS3472
* Color Light-to-Digital Converter with IR Filter

*/

#ifndef _TCS3472_H_
#define _TCS3472_H_
#include <Arduino.h>
#include <Wire.h>

/*
 * Valid values for Setup the device configuration

 */
enum init {
    INIT_POWER = 1, // Power
    INIT_RGBC = 2 // Color
};
typedef enum init init_t;

class TCS3472 {
    public:
        TCS3472(TwoWire& wire);

        void begin();
        void end();
        /**
         * Enable specific components of the peripheral

         */
        uint8_t readenable();

        /**
         * Enable specific components of the peripheral

         */
        int writeenable(uint8_t data);
        /**
         * This is the ambient amount of detected light.

         */
        uint16_t readclear();

        /**
         * This is the ambient amount of detected light.

         */
        int writeclear(uint16_t data);
        /**
         * Red light as an int. Divide by ambient light to get scaled number.

         */
        uint16_t readred();

        /**
         * Red light as an int. Divide by ambient light to get scaled number.

         */
        int writered(uint16_t data);
        /**
         * Green light as an int. Divide by ambient light to get scaled number.

         */
        uint16_t readgreen();

        /**
         * Green light as an int. Divide by ambient light to get scaled number.

         */
        int writegreen(uint16_t data);
        /**
         * Blue light as an int. Divide by ambient light to get scaled number.

         */
        uint16_t readblue();

        /**
         * Blue light as an int. Divide by ambient light to get scaled number.

         */
        int writeblue(uint16_t data);
        /**
         * Enable RGBC and Power

         */
        uint8_t getinit();
        /**
         * Enable RGBC and Power

         */
        int setinit(uint8_t data);



    private:
        TwoWire* _wire;
};

#endif