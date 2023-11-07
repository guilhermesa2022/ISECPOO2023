//
// Created by 35193 on 02/11/2023.
//

#include "Pessoa.h"
#include <ostream>
#include <sstream>

// includes e outras declarações omitidos
Pessoa::Pessoa(string _nome, int _bi, int _nif) : nome(_nome), bi(_bi), nif(_nif) { }
string Pessoa::getNome() const { return nome; }
int Pessoa::getBI() const { return bi; }
int Pessoa::getNIF() const { return nif; }
void Pessoa::setNome(string _nome) { nome = _nome; }
string Pessoa::descricao() const {
    ostringstream oss;
    oss << nome << bi << nif;
    return oss.str();
}
