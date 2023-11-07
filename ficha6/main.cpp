#include <iostream>
#include <string>
#include "RegistoCivil.h"
using namespace std;
int main() {
RegistoCivil RCP("portugal");
RCP.addPessoa("gui", 71827, 65738);
    RCP.addPessoa("rui", 723827, 212738);
    RCP.addPessoa("eduardo", 73127, 6328);
    RCP.addPessoa("maria", 11117, 2228);
    RCP.addPessoa("max", 3312, 892);

    cout << RCP.getAsString();

    return 0;
}
