//
// Created by Maikol Guzman  on 2019-09-26.
//

#ifndef LAB_7_COMPOSICION_RUEDA_H
#define LAB_7_COMPOSICION_RUEDA_H
#include <iostream>
using namespace std;

class Rueda {
    float tamano;
    float presion;

    public:
        Rueda();
        Rueda(const float &tamano, const float &presion);
        void cambiarPresion();
        string toString();
};


#endif //LAB_7_COMPOSICION_RUEDA_H
