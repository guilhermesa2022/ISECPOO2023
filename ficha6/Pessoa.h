//
// Created by 35193 on 02/11/2023.
//

#ifndef FICHA6_PESSOA_H
#define FICHA6_PESSOA_H
#include <string>
using namespace std;

class Pessoa {
public:
    Pessoa(string nome, int bi, int nif);
    string getNome() const;
    int getBI() const;
    int getNIF() const;
    void setNome(string nome);
    string descricao() const;
    // vai precisar de ser acrescentado por causa de RegCiv
    // Pessoa();
private:
    string nome;
    int bi, nif;
};


#endif //FICHA6_PESSOA_H
