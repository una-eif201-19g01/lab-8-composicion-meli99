#include <iostream>
#include "Carro.h"

int main() {
    // Carro(string placa, int litros, Puerta carPuerta, Rueda carRueda, Motor carMotor);

    Carro *carro = new Carro();

    std::cout << carro->mostrarPropiedades();

    std::cout << "**************************************** \n";

    carro->encenderMotor();
    carro->abrirVentanas();
    carro->cambiarPresionRueda();

    std::cout << carro->mostrarPropiedades();
    return 0;
}