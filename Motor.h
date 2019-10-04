//
// Created by Maikol Guzman  on 2019-09-26.
//

#ifndef LAB_7_COMPOSICION_MOTOR_H
#define LAB_7_COMPOSICION_MOTOR_H

#include <iostream>
using namespace std;

class Motor {
    bool estado;

    public:
        Motor();
        Motor(const bool &estado);
        virtual ~Motor();
        void encender();
        void apagar();

        string toString();
};


#endif //LAB_7_COMPOSICION_MOTOR_H
