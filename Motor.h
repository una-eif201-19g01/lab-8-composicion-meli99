//
// Created by Maikol Guzman  on 2019-09-26.
//

#ifndef LAB_7_COMPOSICION_MOTOR_H
#define LAB_7_COMPOSICION_MOTOR_H


class Motor {
    bool estado;

    public:
        Motor();
        Motor(const bool &estado);
        void encender();
        void apagar();
};


#endif //LAB_7_COMPOSICION_MOTOR_H
