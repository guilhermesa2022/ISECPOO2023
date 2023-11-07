//
// Created by 35193 on 02/11/2023.
//

#include "Fracoe.h"
Fracoe::Fracoe(int numeradaor, int denominador)
                    :numeradaor(numeradaor), denominador(denominador == 0? 1: denominador){}
Fracoe& Fracoe::operator*(const Fracoe& fra){
    numeradaor *= fra.getnumeradaor();
    denominador *= fra.getdenominador();
    return *this;
}

int Fracoe::getnumeradaor() const{
    return numeradaor;
}
int Fracoe::getdenominador() const{
    return denominador;
}



