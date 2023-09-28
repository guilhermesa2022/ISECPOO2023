////////////////////////////////////////////////////////////////////////
//EX1
/*
#include <iostream>
using namespace std;
int main() {
    cout<<"Hello World";
    return 0;
}
*/
////////////////////////////////////////////////////////////////////////
//EX2
/*
#include <iostream>
#include <limits>
using namespace std;

int main() {
    string nome;
    int idade = 0;
    cout<< endl <<"Incira o seu nome:";
    cin >> nome;


    cout<< endl <<"Incira o seu idade:";
    while (!(cin >> idade) || idade <= 0 || idade > 140){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<< endl << "Incira o seu idade em numeros :";
        cin >> idade;
    }

    cout<< endl <<"O seu nome e : " << nome << " e a sua idade e : " << idade << endl;

    return 0;
}
*/
////////////////////////////////////////////////////////////////////////
//EX4
/*
#include <iostream>
using namespace std;
int main() {
    string palavra;
    do {
        cout << endl << "Incira a palavra:";
        cin >> palavra;

        for (int i = palavra.length() - 1; i >= 0; i--) {
            cout << palavra[i];
        }
    } while (true);
    return 0;
}
*/
////////////////////////////////////////////////////////////////////////
//EX5
