#include "Carro.h"

Carro::Carro(){
    placa = "";
}

Carro::Carro(string placa, int litros, Puerta *carPuerta, Rueda *carRueda, Motor *carMotor, Propietario *carPropietario) {
    Carro::placa = placa;
    Carro::litros = litros;
    puerta = carPuerta;
    rueda = carRueda;
    motor = carMotor;
    propietario = carPropietario;
}

Carro::~Carro() {
    delete puerta;
    delete rueda;
    delete motor;
    delete propietario;

    puerta = nullptr;
    rueda = nullptr;
    motor = nullptr;
    propietario = nullptr;
}

void Carro::encenderMotor() {
    motor->encender();
}

void Carro::abrirPuertas() {
    puerta->abrirPuerta();
}

void Carro::abrirVentanas() {
    puerta->abrirVentana();
}

void Carro::cambiarPresionRueda() {
    rueda->cambiarPresion();
}

string Carro::mostrarPropiedades() {
    string propiedades;

    propiedades += motor->toString() += puerta->toString() += rueda->toString() += propietario->toString();

    return propiedades;
}