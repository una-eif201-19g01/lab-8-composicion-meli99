//
// Created by Maikol Guzman  on 2019-09-26.
//

#include "Puerta.h"
Puerta::Puerta() {
    ventana = new Ventana();
    estado = false;
}

Puerta::Puerta(Ventana* ventana, const bool &estado) {
    Puerta::ventana = ventana;
    Puerta::estado = estado;
}

Puerta::~Puerta() {
    delete ventana;
    ventana = nullptr;
}

void Puerta::abrirPuerta() {
    estado = true;
}

void Puerta::cerrarPuerta() {
    estado = false;
}

void Puerta::abrirVentana() {
    ventana->abrir();
}

void Puerta::cerrarVentana() {
    ventana->cerrar();
}

string Puerta::toString() {
    string propiedades;
    string puertaEstado;

    if (estado == true) {
        puertaEstado = "abiertas";
    } else {
        puertaEstado = "cerradas";
    }
    
    propiedades += "Las puertas están " + puertaEstado + "\n" + ventana->toString();

    return (propiedades);
}