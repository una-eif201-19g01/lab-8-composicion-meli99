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

    Puerta puerta;
    Rueda rueda;
    Motor motor;
    Propietario propietario;

    public:
        Carro();
        Carro(string placa, int litros, Puerta carPuerta, Rueda carRueda, Motor carMotor);
        int tostring();
        void encenderMotor();
        void abrirPuertas();
        void abrirVentanas();
        void cambiarPresionRueda();
};


#endif //CARRO_H