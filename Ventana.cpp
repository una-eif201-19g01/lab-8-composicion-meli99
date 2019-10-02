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

void Ventana::abrir() {
    estado = true;
}

void Ventana::cerrar() {
    estado = false;
}