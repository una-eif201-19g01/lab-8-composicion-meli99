//
// Created by Maikol Guzman  on 2019-09-26.
//

#include "Rueda.h"

Rueda::Rueda() {
    tamano = 0.0;
    presion = 0.0;
}

Rueda::Rueda(const float &tamano, const float &presion) {
    Rueda::tamano = tamano;
    Rueda::presion = presion;
}

void Rueda::cambiarPresion() {
    Rueda::presion = 20.00;
}

string Rueda::toString(){
    string propiedades;

    propiedades += "La presion de las ruedas es " + to_string(presion) + "\n" + "El tamaño de las ruedas es " + to_string(tamano) + "\n ";

    return propiedades;
}