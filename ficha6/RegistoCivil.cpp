//
// Created by 35193 on 02/11/2023.
//

#include <sstream>
#include "RegistoCivil.h"

RegistoCivil::RegistoCivil(string pais): pais(pais){}
string RegistoCivil::getpais() const{
    return pais;
}
void RegistoCivil::addPessoa(string _nome, int _bi, int _nif){
    pessoas.push_back(Pessoa(_nome, _bi, _nif));
}
string RegistoCivil::getAsString() const{
    ostringstream os;
    for(auto p : pessoas){
        os << "nome : " << p.getNome() <<" bi: " << p.getBI() << " nif: " << p.getNIF() << endl;
    }
    return os.str();
}