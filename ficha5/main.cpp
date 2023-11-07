#include <iostream>
#include "Fracoe.h"
#include "Vetor.h"

std::ostream& operator<<(std::ostream& os, const Fracoe& fra) {
    os << fra.getnumeradaor() << "/" << fra.getdenominador() << std::endl;
    return os;
}
std::ostream& operator<<(std::ostream& os, const Vetor& V) {
    os << V.getCordenada_x() << "/" << V.getCordenada_y() << std::endl;
    return os;
}

Vetor operator+(int num, const Vetor& V) {
    Vetor ve(num);
    ve + V;
    return ve;
}
Vetor operator+(const Vetor& V, const Vetor& V2) {
     Vetor ret(V.getCordenada_x() + V2.getCordenada_x(), V.getCordenada_y() + V2.getCordenada_y());
    return ret;
}

std::istream& operator>>(std::istream& in, Vetor& objeto) {
    double x, y;
    in >> x >> y;
    objeto.setCordenada_x(x);
    objeto.setCordenada_y(y);
    return in;
}


int main() {
    /*Fracoe a(1,2), b(3);
    const Fracoe c(5,6);
    a = b * c;
    Fracoe d = a * b * c;
    a = b * 4;
    std::cout << a;
    std::cout << b << c;*/

    /*
    Vetor v1(2.0, 1.0), v2(1.0, 3.0), v3(2.2), z;
    z = v1 + v2 + v3;
    cout << v1 << "+" << v2 << "+" << v3 << "=" << z << endl; // obs: "(x,y)"
    z = v1 + 10.0;
    cout << v1 << " + " << " 10 = " << z << endl;
    z = 20.0 + v1;
    cout << "20 + " << v1 << " = " << z << endl;
    z = v1 - v2;
    cout << v1 << " - " << v2 << " = " << z << endl;
    Vetor a(1.0, 1.0), b(2.0, 4.0);
    cout << " a= " << a << " b= " << b << endl;
    a += b += v1;
    a += b;
    a += 10.0;
    cout << " a= " << a << endl;
    cout << "(a == b)? " << (a == b) << endl;
    cout << "(a != b)? " << (a != b) << endl;
    */
    /*Vetor a(1,1);
    double modulo = double(a); // significado = modulo do vetor
    double k = a;
    Vetor b = (Vetor)2.5; // verifique primeiro se já está a ser possível isto
    Vetor c(1.0, 1.0);
    cout << "\n Operadores unários \n";
    b = a + 4.0; // verifique se fizer um operador para este caso dará erro
    cout <<"\nc=" << c;
    cout << "\n++ -> c=" << ++c;
    cout <<"\nc="<< c;
    Vetor d(1.0, 1.0);
    cout <<"\nd="<< d ;
    cout << "\nd++:" << d++;
    cout << "\nd=" << d << endl;
    cin >> a >> b;
    cout << a << "\n" << b;
    if ((bool) a)
        cout << "o vetor a tem as coordenadas 0,0";
    return 0;
*/
}


