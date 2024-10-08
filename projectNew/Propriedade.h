//
// Created by 35193 on 07/11/2023.
//

#ifndef PROJECTNEW_PROPRIEDADE_H
#define PROJECTNEW_PROPRIEDADE_H

#include <iostream>
#include <map>
#include <string>
#include <optional>

using namespace std;

class Propriedade {
    double valor;
    optional<double> minimo;
    optional<double> maximo;
public:
    //Propriedade(optional<double> max = {}, char escolha = 'p');
    Propriedade(optional<double> min = {}, optional<double> max = {});
    void definirValor(double v);
    double obterValor() const;
    bool has_max() const;
    bool has_min() const;
    double getmax() const;
    double getmin() const;
};

#endif //PROJECTNEW_PROPRIEDADE_H
