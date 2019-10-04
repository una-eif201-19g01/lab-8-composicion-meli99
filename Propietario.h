//
// Created by Maikol Guzman  on 2019-09-26.
//

#ifndef LAB_7_COMPOSICION_PROPIETARIO_H
#define LAB_7_COMPOSICION_PROPIETARIO_H

#include <iostream>
using namespace std;
// #include "Carro.h"

class Propietario {
    string nombre;

    public:
        Propietario();
        Propietario(const string &nombre);
        string toString();
        void setNombre(const string &nombre);
        string getNombre();
};


#endif //LAB_7_COMPOSICION_PROPIETARIO_H
