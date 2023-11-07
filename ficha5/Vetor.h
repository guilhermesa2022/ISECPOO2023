//
// Created by 35193 on 02/11/2023.
//

#ifndef FICHA5_VETOR_H
#define FICHA5_VETOR_H
#include <string>
using namespace std;
class Vetor {
    double cordenada_x;
    double cordenada_y;
public:
    Vetor(double x, double y);
    explicit Vetor(double xEy = 0);

    double getCordenada_x()const;
    double getCordenada_y()const;
    void setCordenada_x(double x);
    void setCordenada_y(double y);
    string getAsString() const;
    Vetor& operator+(const Vetor& V);
    Vetor& operator-(const Vetor& V);
    Vetor& operator+=(const Vetor& V);
    bool operator==(const Vetor& V);
    operator double() const;
    Vetor& operator++();
    Vetor operator++(int);
    Vetor operator+(double escalar) const;


};


#endif //FICHA5_VETOR_H
