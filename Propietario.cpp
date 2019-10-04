//
// Created by Maikol Guzman  on 2019-09-26.
//

#include "Propietario.h"

Propietario::Propietario() {
    nombre = "Jorge";
}

Propietario::Propietario(const string &nombre) {
    Propietario::nombre = nombre;
}

string Propietario::getNombre() {
    return nombre;
}

void Propietario::setNombre(const string &nombre) {
    Propietario::nombre = nombre;
}

string Propietario::toString() {
    string propiedades;
    
    propiedades += "El nombre del propietario es " + nombre + "\n";

    return (propiedades);
}