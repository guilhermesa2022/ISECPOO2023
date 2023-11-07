//
// Created by 35193 on 02/11/2023.
//

#ifndef FICHA5_FRACOE_H
#define FICHA5_FRACOE_H
#include <string>

class Fracoe {
    int numeradaor;
    int denominador;

public:
    Fracoe(int numeradaor, int denominador = 1);
    Fracoe& operator*(const Fracoe& fra);
    int getnumeradaor() const;
    int getdenominador() const;


};


#endif //FICHA5_FRACOE_H
