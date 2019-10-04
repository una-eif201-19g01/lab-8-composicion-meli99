#ifndef CARRO_H
#define CARRO_H

#include <iostream>
#include "Puerta.h"
#include "Rueda.h"
#include "Motor.h"
#include "Propietario.h"
using namespace std;

class Carro {
    string placa;
    int litros;

    Puerta *puerta = new Puerta();
    Rueda *rueda = new Rueda();
    Motor *motor = new Motor();
    Propietario *propietario = new Propietario();

    public:
        Carro();
        Carro(string placa, int litros, Puerta *carPuerta, Rueda *carRueda, Motor *carMotor, Propietario *carPropietario);
        ~Carro();
        int tostring();
        void encenderMotor();
        void abrirPuertas();
        void abrirVentanas();
        void cambiarPresionRueda();

        string mostrarPropiedades();
};


#endif //CARRO_H