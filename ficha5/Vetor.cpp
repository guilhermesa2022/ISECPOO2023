//
// Created by 35193 on 02/11/2023.
//

#include <sstream>
#include <valarray>
#include "Vetor.h"

Vetor::Vetor(double x, double y): cordenada_x(x), cordenada_y(y){}
Vetor::Vetor(double xEy):cordenada_y(xEy), cordenada_x(xEy){}

double Vetor::getCordenada_x() const{
    return cordenada_x;
}
double Vetor::getCordenada_y() const{
    return cordenada_y;
}
void Vetor::setCordenada_x(double x){
    cordenada_x = x;
}
void Vetor::setCordenada_y(double y){
   cordenada_y = y;
}
string Vetor::getAsString() const{
    ostringstream os;
    os << "cordenada_x : " << cordenada_x <<" cordenada_y : " << cordenada_y << endl;
    return os.str();
}
Vetor& Vetor::operator+(const Vetor& V){
    cordenada_x += V.cordenada_x;
    cordenada_y += V.cordenada_y;
    return *this;
}

Vetor& Vetor::operator-(const Vetor& V){
    cordenada_x -= V.cordenada_x;
    cordenada_y -= V.cordenada_y;
    return *this;
}
Vetor& Vetor::operator+=(const Vetor& V){
    cordenada_x += V.cordenada_x;
    cordenada_y += V.cordenada_y;
    return *this;
}
bool Vetor::operator==(const Vetor& V){
    if ((cordenada_x == V.cordenada_x)&&(cordenada_y == V.cordenada_y))
        return true;
    return false;
}
Vetor::operator double() const {
    return std::sqrt(cordenada_x * cordenada_x + cordenada_y * cordenada_y);
}
Vetor& Vetor::operator++(){
    ++cordenada_x;
    ++cordenada_y;
    return *this;
}
Vetor Vetor::operator++(int){
    Vetor cpy(*this);
    ++cordenada_x;
    ++cordenada_y;
    return cpy;
}

Vetor Vetor::operator+(double escalar) const {
    return Vetor(cordenada_x + escalar, cordenada_y + escalar);
}

