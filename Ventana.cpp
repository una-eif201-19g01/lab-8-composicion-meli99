//
// Created by Maikol Guzman  on 2019-09-26.
//

#include "Ventana.h"

Ventana::Ventana() {
    polarizada = false;
    electrica = false;
    estado = false;
}

Ventana::Ventana(const bool &polarizada, const bool &electrica, const bool &estado) {
    Ventana::polarizada = polarizada;
    Ventana::electrica = electrica;
    Ventana::estado = estado;
}

Ventana::~Ventana() {
}

void Ventana::abrir() {
    estado = true;
}

void Ventana::cerrar() {
    estado = false;
}

string Ventana::toString() {
    string propiedades;
    string ventanaEstado;
    string esElectrica;
    string esPolarizada;

    if (estado == true) {
        ventanaEstado = "abiertas";
    } else {
        ventanaEstado = "cerradas";
    }

    if (polarizada == true) {
        esPolarizada = "son polarizadas";
    } else {
        esPolarizada = "no son polarizadas";
    }

    if (electrica == true) {
        esElectrica = "son eléctricas";
    } else {
        esElectrica = "no son eléctricas";
    }
    propiedades += "Las ventanas están " + ventanaEstado + ", " + esElectrica + " y " + esPolarizada + "\n";

    return propiedades;
}