//
// Created by Maikol Guzman  on 2019-09-26.
//

#include "Puerta.h"
Puerta::Puerta() {
    ventana = nullptr;
    estado = false;
}

Puerta::Puerta(Ventana* ventana, const bool &estado) {
    Puerta::ventana = ventana;
    Puerta::estado = estado;
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