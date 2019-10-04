//
// Created by Maikol Guzman  on 2019-09-26.
//

#ifndef LAB_7_COMPOSICION_VENTANA_H
#define LAB_7_COMPOSICION_VENTANA_H

#include <iostream>
using namespace std;

class Ventana {
    bool polarizada;
    bool electrica;
    bool estado;

    public:
        Ventana();
        Ventana(const bool &polarizada, const bool &electrica, const bool &estado);
        ~Ventana();
        void abrir();
        void cerrar();
        string toString();
};


#endif //LAB_7_COMPOSICION_VENTANA_H
