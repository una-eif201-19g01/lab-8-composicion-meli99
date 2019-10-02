//
// Created by Maikol Guzman  on 2019-09-26.
//

#ifndef LAB_7_COMPOSICION_PROPIETARIO_H
#define LAB_7_COMPOSICION_PROPIETARIO_H

#include <iostream>
using namespace std;

class Propietario {
    string nombre;
    // Carro carro;

    public:
        Propietario();
        Propietario(const string &nombre);
        string toString();
};
#include "Carro.h"


#endif //LAB_7_COMPOSICION_PROPIETARIO_H
