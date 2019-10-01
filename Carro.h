#ifndef CARRO_H
#define CARRO_H

#include <iostream>
#include "Puerta.h"
#include "Rueda.h"
#include "Motor.h"
using namespace std;

class Carro {
    string placa;
    int litros;

    Puerta puerta;
    Rueda rueda;
    Motor motor;

    public:
        Carro();
        int tostring();
        void encenderMotor();
        void abrirPuertas();
        void abrirVentanas();
        void cambiarPresionRueda();
};


#endif //CARRO_H