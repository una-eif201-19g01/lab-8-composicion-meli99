//
// Created by Maikol Guzman  on 2019-09-26.
//

#ifndef LAB_7_COMPOSICION_PUERTA_H
#define LAB_7_COMPOSICION_PUERTA_H
#include "Ventana.h"
#include <iostream>
using namespace std;

class Puerta {
    Ventana* ventana;
    bool estado;

    public:
        Puerta();
        Puerta(Ventana* ventana, const bool &estado);
        ~Puerta();
        void abrirPuerta();
        void cerrarPuerta();
        void abrirVentana();
        void cerrarVentana();      

        string toString();
};


#endif //LAB_7_COMPOSICION_PUERTA_H
