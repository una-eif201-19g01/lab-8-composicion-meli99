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

Motor::~Motor() {}

void Motor::encender() {
    estado = true;
}

void Motor::apagar() {
    estado = false;
}

string Motor::toString() {
    string propiedades;
    string motorEstado;

    if (estado == true) {
        motorEstado = "encendido";
    } else {
        motorEstado = "apagado";
    }
    propiedades += "El motor está " + motorEstado + "\n";
    return (propiedades);
}