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
* Auto-generated file for LSM303D v0.1.0.
* Generated from peripherals/LSM303D.yaml using Cyanobyte Codegen v0.1.0
* Class for LSM303D
* STMicroelectronics accelerometer and magnetometer

*/




#include "LSM303D.h"
#define DEVICE_ADDRESS 29

#define REGISTER_ACCELEROMETERX_LOW 168
#define REGISTER_ACCELEROMETERX_HIGH 169
#define REGISTER_ACCELEROMETERY_LOW 170
#define REGISTER_ACCELEROMETERY_HIGH 171
#define REGISTER_ACCELEROMETERZ_LOW 172
#define REGISTER_ACCELEROMETERZ_HIGH 173
#define REGISTER_MAGNETOMETERX_LOW 136
#define REGISTER_MAGNETOMETERX_HIGH 137
#define REGISTER_MAGNETOMETERY_LOW 138
#define REGISTER_MAGNETOMETERY_HIGH 139
#define REGISTER_MAGNETOMETERZ_LOW 140
#define REGISTER_MAGNETOMETERZ_HIGH 141

LSM303D::LSM303D(TwoWire& wire) :
    _wire(&wire)
{
}

void LSM303D::begin() {
    _wire->begin();
}

void LSM303D::end() {
    _wire->end();
}

uint8_t LSM303D::readAccelerometerX_Low() {
    uint8_t datum;
    uint8_t value;
    _wire->beginTransmission(DEVICE_ADDRESS);
    _wire->write(REGISTER_ACCELEROMETERX_LOW);
    if (_wire->endTransmission(false) != 0) {
        return -1;
    }

    if (_wire->requestFrom(DEVICE_ADDRESS, 8) != 8) {
        return 0;
    }

    datum = _wire->read();
    value = value << 8 | datum;

    return value;
}

int LSM303D::writeAccelerometerX_Low(uint8_t data) {
    _wire->beginTransmission(DEVICE_ADDRESS);
    // Put our data into uint8_t buffer
    uint8_t buffer[2] = { (uint8_t) REGISTER_ACCELEROMETERX_LOW };
    buffer[1] = (data >> 0) & 0xFF;
    _wire->write(buffer, 2);
    if (_wire->endTransmission() != 0) {
        return 0;
    }
    return 1;
}

uint8_t LSM303D::readAccelerometerX_High() {
    uint8_t datum;
    uint8_t value;
    _wire->beginTransmission(DEVICE_ADDRESS);
    _wire->write(REGISTER_ACCELEROMETERX_HIGH);
    if (_wire->endTransmission(false) != 0) {
        return -1;
    }

    if (_wire->requestFrom(DEVICE_ADDRESS, 8) != 8) {
        return 0;
    }

    datum = _wire->read();
    value = value << 8 | datum;

    return value;
}

int LSM303D::writeAccelerometerX_High(uint8_t data) {
    _wire->beginTransmission(DEVICE_ADDRESS);
    // Put our data into uint8_t buffer
    uint8_t buffer[2] = { (uint8_t) REGISTER_ACCELEROMETERX_HIGH };
    buffer[1] = (data >> 0) & 0xFF;
    _wire->write(buffer, 2);
    if (_wire->endTransmission() != 0) {
        return 0;
    }
    return 1;
}

uint8_t LSM303D::readAccelerometerY_Low() {
    uint8_t datum;
    uint8_t value;
    _wire->beginTransmission(DEVICE_ADDRESS);
    _wire->write(REGISTER_ACCELEROMETERY_LOW);
    if (_wire->endTransmission(false) != 0) {
        return -1;
    }

    if (_wire->requestFrom(DEVICE_ADDRESS, 8) != 8) {
        return 0;
    }

    datum = _wire->read();
    value = value << 8 | datum;

    return value;
}

int LSM303D::writeAccelerometerY_Low(uint8_t data) {
    _wire->beginTransmission(DEVICE_ADDRESS);
    // Put our data into uint8_t buffer
    uint8_t buffer[2] = { (uint8_t) REGISTER_ACCELEROMETERY_LOW };
    buffer[1] = (data >> 0) & 0xFF;
    _wire->write(buffer, 2);
    if (_wire->endTransmission() != 0) {
        return 0;
    }
    return 1;
}

uint8_t LSM303D::readAccelerometerY_High() {
    uint8_t datum;
    uint8_t value;
    _wire->beginTransmission(DEVICE_ADDRESS);
    _wire->write(REGISTER_ACCELEROMETERY_HIGH);
    if (_wire->endTransmission(false) != 0) {
        return -1;
    }

    if (_wire->requestFrom(DEVICE_ADDRESS, 8) != 8) {
        return 0;
    }

    datum = _wire->read();
    value = value << 8 | datum;

    return value;
}

int LSM303D::writeAccelerometerY_High(uint8_t data) {
    _wire->beginTransmission(DEVICE_ADDRESS);
    // Put our data into uint8_t buffer
    uint8_t buffer[2] = { (uint8_t) REGISTER_ACCELEROMETERY_HIGH };
    buffer[1] = (data >> 0) & 0xFF;
    _wire->write(buffer, 2);
    if (_wire->endTransmission() != 0) {
        return 0;
    }
    return 1;
}

uint8_t LSM303D::readAccelerometerZ_Low() {
    uint8_t datum;
    uint8_t value;
    _wire->beginTransmission(DEVICE_ADDRESS);
    _wire->write(REGISTER_ACCELEROMETERZ_LOW);
    if (_wire->endTransmission(false) != 0) {
        return -1;
    }

    if (_wire->requestFrom(DEVICE_ADDRESS, 8) != 8) {
        return 0;
    }

    datum = _wire->read();
    value = value << 8 | datum;

    return value;
}

int LSM303D::writeAccelerometerZ_Low(uint8_t data) {
    _wire->beginTransmission(DEVICE_ADDRESS);
    // Put our data into uint8_t buffer
    uint8_t buffer[2] = { (uint8_t) REGISTER_ACCELEROMETERZ_LOW };
    buffer[1] = (data >> 0) & 0xFF;
    _wire->write(buffer, 2);
    if (_wire->endTransmission() != 0) {
        return 0;
    }
    return 1;
}

uint8_t LSM303D::readAccelerometerZ_High() {
    uint8_t datum;
    uint8_t value;
    _wire->beginTransmission(DEVICE_ADDRESS);
    _wire->write(REGISTER_ACCELEROMETERZ_HIGH);
    if (_wire->endTransmission(false) != 0) {
        return -1;
    }

    if (_wire->requestFrom(DEVICE_ADDRESS, 8) != 8) {
        return 0;
    }

    datum = _wire->read();
    value = value << 8 | datum;

    return value;
}

int LSM303D::writeAccelerometerZ_High(uint8_t data) {
    _wire->beginTransmission(DEVICE_ADDRESS);
    // Put our data into uint8_t buffer
    uint8_t buffer[2] = { (uint8_t) REGISTER_ACCELEROMETERZ_HIGH };
    buffer[1] = (data >> 0) & 0xFF;
    _wire->write(buffer, 2);
    if (_wire->endTransmission() != 0) {
        return 0;
    }
    return 1;
}

uint8_t LSM303D::readMagnetometerX_Low() {
    uint8_t datum;
    uint8_t value;
    _wire->beginTransmission(DEVICE_ADDRESS);
    _wire->write(REGISTER_MAGNETOMETERX_LOW);
    if (_wire->endTransmission(false) != 0) {
        return -1;
    }

    if (_wire->requestFrom(DEVICE_ADDRESS, 8) != 8) {
        return 0;
    }

    datum = _wire->read();
    value = value << 8 | datum;

    return value;
}

int LSM303D::writeMagnetometerX_Low(uint8_t data) {
    _wire->beginTransmission(DEVICE_ADDRESS);
    // Put our data into uint8_t buffer
    uint8_t buffer[2] = { (uint8_t) REGISTER_MAGNETOMETERX_LOW };
    buffer[1] = (data >> 0) & 0xFF;
    _wire->write(buffer, 2);
    if (_wire->endTransmission() != 0) {
        return 0;
    }
    return 1;
}

uint8_t LSM303D::readMagnetometerX_High() {
    uint8_t datum;
    uint8_t value;
    _wire->beginTransmission(DEVICE_ADDRESS);
    _wire->write(REGISTER_MAGNETOMETERX_HIGH);
    if (_wire->endTransmission(false) != 0) {
        return -1;
    }

    if (_wire->requestFrom(DEVICE_ADDRESS, 8) != 8) {
        return 0;
    }

    datum = _wire->read();
    value = value << 8 | datum;

    return value;
}

int LSM303D::writeMagnetometerX_High(uint8_t data) {
    _wire->beginTransmission(DEVICE_ADDRESS);
    // Put our data into uint8_t buffer
    uint8_t buffer[2] = { (uint8_t) REGISTER_MAGNETOMETERX_HIGH };
    buffer[1] = (data >> 0) & 0xFF;
    _wire->write(buffer, 2);
    if (_wire->endTransmission() != 0) {
        return 0;
    }
    return 1;
}

uint8_t LSM303D::readMagnetometerY_Low() {
    uint8_t datum;
    uint8_t value;
    _wire->beginTransmission(DEVICE_ADDRESS);
    _wire->write(REGISTER_MAGNETOMETERY_LOW);
    if (_wire->endTransmission(false) != 0) {
        return -1;
    }

    if (_wire->requestFrom(DEVICE_ADDRESS, 8) != 8) {
        return 0;
    }

    datum = _wire->read();
    value = value << 8 | datum;

    return value;
}

int LSM303D::writeMagnetometerY_Low(uint8_t data) {
    _wire->beginTransmission(DEVICE_ADDRESS);
    // Put our data into uint8_t buffer
    uint8_t buffer[2] = { (uint8_t) REGISTER_MAGNETOMETERY_LOW };
    buffer[1] = (data >> 0) & 0xFF;
    _wire->write(buffer, 2);
    if (_wire->endTransmission() != 0) {
        return 0;
    }
    return 1;
}

uint8_t LSM303D::readMagnetometerY_High() {
    uint8_t datum;
    uint8_t value;
    _wire->beginTransmission(DEVICE_ADDRESS);
    _wire->write(REGISTER_MAGNETOMETERY_HIGH);
    if (_wire->endTransmission(false) != 0) {
        return -1;
    }

    if (_wire->requestFrom(DEVICE_ADDRESS, 8) != 8) {
        return 0;
    }

    datum = _wire->read();
    value = value << 8 | datum;

    return value;
}

int LSM303D::writeMagnetometerY_High(uint8_t data) {
    _wire->beginTransmission(DEVICE_ADDRESS);
    // Put our data into uint8_t buffer
    uint8_t buffer[2] = { (uint8_t) REGISTER_MAGNETOMETERY_HIGH };
    buffer[1] = (data >> 0) & 0xFF;
    _wire->write(buffer, 2);
    if (_wire->endTransmission() != 0) {
        return 0;
    }
    return 1;
}

uint8_t LSM303D::readMagnetometerZ_Low() {
    uint8_t datum;
    uint8_t value;
    _wire->beginTransmission(DEVICE_ADDRESS);
    _wire->write(REGISTER_MAGNETOMETERZ_LOW);
    if (_wire->endTransmission(false) != 0) {
        return -1;
    }

    if (_wire->requestFrom(DEVICE_ADDRESS, 8) != 8) {
        return 0;
    }

    datum = _wire->read();
    value = value << 8 | datum;

    return value;
}

int LSM303D::writeMagnetometerZ_Low(uint8_t data) {
    _wire->beginTransmission(DEVICE_ADDRESS);
    // Put our data into uint8_t buffer
    uint8_t buffer[2] = { (uint8_t) REGISTER_MAGNETOMETERZ_LOW };
    buffer[1] = (data >> 0) & 0xFF;
    _wire->write(buffer, 2);
    if (_wire->endTransmission() != 0) {
        return 0;
    }
    return 1;
}

uint8_t LSM303D::readMagnetometerZ_High() {
    uint8_t datum;
    uint8_t value;
    _wire->beginTransmission(DEVICE_ADDRESS);
    _wire->write(REGISTER_MAGNETOMETERZ_HIGH);
    if (_wire->endTransmission(false) != 0) {
        return -1;
    }

    if (_wire->requestFrom(DEVICE_ADDRESS, 8) != 8) {
        return 0;
    }

    datum = _wire->read();
    value = value << 8 | datum;

    return value;
}

int LSM303D::writeMagnetometerZ_High(uint8_t data) {
    _wire->beginTransmission(DEVICE_ADDRESS);
    // Put our data into uint8_t buffer
    uint8_t buffer[2] = { (uint8_t) REGISTER_MAGNETOMETERZ_HIGH };
    buffer[1] = (data >> 0) & 0xFF;
    _wire->write(buffer, 2);
    if (_wire->endTransmission() != 0) {
        return 0;
    }
    return 1;
}



short LSM303D::accelerationxPlane() {
    char lower; // Variable declaration
    char upper; // Variable declaration
    short datum; // Variable declaration


    lower = readAccelerometerX_Low();
    upper = readAccelerometerX_High();
    datum = ((upper << 8)+lower);


    return datum;
}

short LSM303D::accelerationyPlane() {
    char lower; // Variable declaration
    char upper; // Variable declaration
    short datum; // Variable declaration


    lower = readAccelerometerY_Low();
    upper = readAccelerometerY_High();
    datum = ((upper << 8)+lower);


    return datum;
}

short LSM303D::accelerationzPlane() {
    char lower; // Variable declaration
    char upper; // Variable declaration
    short datum; // Variable declaration


    lower = readAccelerometerZ_Low();
    upper = readAccelerometerZ_High();
    datum = ((upper << 8)+lower);


    return datum;
}

void LSM303D::accelerationasG(short * returnArray) {
    short valueX; // Variable declaration
    short valueY; // Variable declaration
    short valueZ; // Variable declaration
    char accelerationScale; // Variable declaration


    accelerationScale = 2;
    valueX = accelerationxPlane();
    valueY = accelerationyPlane();
    valueZ = accelerationzPlane();
    valueX = ((valueX/pow(2, 15))*accelerationScale);
    valueY = ((valueY/pow(2, 15))*accelerationScale);
    valueZ = ((valueZ/pow(2, 15))*accelerationScale);


    returnArray[0] = valueX;
    returnArray[1] = valueY;
    returnArray[2] = valueZ;
}


short LSM303D::orientationxPlane() {
    char lower; // Variable declaration
    char upper; // Variable declaration
    short datum; // Variable declaration


    lower = readMagnetometerX_Low();
    upper = readMagnetometerX_High();
    datum = ((upper << 8)+lower);


    return datum;
}

short LSM303D::orientationyPlane() {
    char lower; // Variable declaration
    char upper; // Variable declaration
    short datum; // Variable declaration


    lower = readMagnetometerY_Low();
    upper = readMagnetometerY_High();
    datum = ((upper << 8)+lower);


    return datum;
}

short LSM303D::orientationzPlane() {
    char lower; // Variable declaration
    char upper; // Variable declaration
    short datum; // Variable declaration


    lower = readMagnetometerZ_Low();
    upper = readMagnetometerZ_High();
    datum = ((upper << 8)+lower);


    return datum;
}

short LSM303D::orientationheading() {
    short valueX; // Variable declaration
    short valueY; // Variable declaration
    short dividend; // Variable declaration
    short heading; // Variable declaration


    valueX = orientationxPlane();
    valueY = orientationyPlane();
    dividend = (valueX/valueY);
    heading = atan(dividend);
    heading = ((int) heading%(int) (2*3.141592653589793));
    heading = ((heading/3.141592653589793)*180);


    return heading;
}

