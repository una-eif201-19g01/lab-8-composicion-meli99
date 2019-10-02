//
// Created by Maikol Guzman  on 2019-09-26.
//

#include "Motor.h"

Motor::Motor() {
    estado = false;
}

Motor::Motor(const bool &estado) {
    Motor::estado = estado;
}

void Motor::encender() {
    estado = true;
}

void Motor::apagar() {
    estado = false;
}