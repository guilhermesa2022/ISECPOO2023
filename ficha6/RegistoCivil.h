//
// Created by 35193 on 02/11/2023.
//

#ifndef FICHA6_REGISTOCIVIL_H
#define FICHA6_REGISTOCIVIL_H
#include <string>
#include <vector>
#include "Pessoa.h"
using namespace std;
class RegistoCivil {
    const string pais;
    vector<Pessoa> pessoas;
public:
    RegistoCivil(string pais);
    string getpais() const;
    void addPessoa(string _nome, int _bi, int _nif);
    string getAsString() const;
};


#endif //FICHA6_REGISTOCIVIL_H
