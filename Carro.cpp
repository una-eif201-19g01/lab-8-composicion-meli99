#include "Carro.h"

Carro::Carro(){
    placa = "";
}

Carro::Carro(string placa, int litros, Puerta carPuerta, Rueda carRueda, Motor carMotor) {
    Carro::placa = placa;
    Carro::litros = litros;
    puerta = carPuerta;
    rueda = carRueda;
    motor = carMotor;
}

void Carro::encenderMotor() {
    motor.encender();
}

void Carro::abrirPuertas() {
    puerta.abrirPuerta();
}

void Carro::abrirVentanas() {
    puerta.abrirVentana();
}

void Carro::cambiarPresionRueda() {
    rueda.cambiarPresion();
}