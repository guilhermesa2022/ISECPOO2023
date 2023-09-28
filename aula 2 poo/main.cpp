/*#include <iostream>

using namespace std;
typedef struct {
    string nome;
    int codigo;
}Aluno;



int main() {
    string linhas, palavra;
    cout << "linha completa";
    getline(cin, linhas);

   return 0;
}
*/

/*
bool preenche(Aluno a, int codigo){
    cout << "qual e o nome do aluno";
    getline(cin, a.nome);
    int c = 11;

    int *p = &c;
    (*p)++;

    if (a.nome.empty()){
        return false;
    }
try{

}catch (int cad){ cerr << "erro";}
    a.codigo = codigo;
    Aluno b;
    a = b;
}

//
// Created by Ana Alves on 28/09/2023.
//

#include <iostream>
#include <string>
#include <sstream>
#include <cctype> //toupper & tolower
using namespace std;
namespace n1 {
    int & sameName(string &s1) {
        static int count=0;
        cout << "String capacity:" << s1.capacity() << endl;
        cout << "String length(how many characters):" << s1.length() << endl;
        for (int i = 0; i < s1.length(); i++) {
            char &c = s1[i];
            c = toupper(s1[i]);
            cout << c << " ";
        }
        cout << endl;
        count++;//Number of times this function was called
        cout << "[" << count << "]" << "Is this string still in CAPITAL LETTERS? " << s1 << endl;
        return count;
    }
    void ex3af1(){
        string word;
        cout << "Indicate a (complete) name:";
        //Reading a full line word by word and checking if any
        //is "Fernando" - finish when a empty word is given
        while(cin >> word){ // stored in the stream
            //When is it supposed to stop?
            if(word == "fim")
                break;
            cout << word << endl;
            if (word == "Fernando")
                cout << "I know him!\n";
        }

    }
    void ex3bf1(){
        string word, line;
        int arg1, arg2;
        cout << "Indicate a (complete) name:";
        //Reading a full line, creating a istringstream object with it,
        //then extracting word by word from this object and checking if any
        //is "Fernando"
        getline(cin, line);
        istringstream buffer(line);
        //Reading a full line word by word and checking if any
        //is "Fernando"
        while(buffer >> word){
            cout << word << endl;
            if (word == "Fernando")
                cout << "I know him!\n";
        }

    }
}

namespace n2 {
    void sameName(string s2, int option = 1) {//1->CAPITAL LETTERS, 2->SMALL LETTERS
        if (option == 1)
            n1::sameName(s2);
        if (option == 2)
            for (char c: s2)
                c = tolower(c);
    }
}

using n1::ex3bf1;

int main() {
    ex3bf1();
    string s="hello";
    cout << "String <no empty words accepted>:";
    try {
        getline(cin, s);
        if (s.length() == 0)
            throw "Error! No empty words accepted!";
    }catch(const char * msg){
        cerr << "Exception caught:" << msg;
    }catch(...){
        cerr << "Here every exception from the try block above is caught!\n";
    }

    cout << "Before calling function:" << s << endl;
    n1::sameName(s);
    cout << "After calling function:" << s << endl;

    //What is happening here?
    n1::sameName(s) = 10;
    n1::sameName(s);
    return 0;
}*/





/*
                                                        EX1
#include <iostream>
#include <string>
#include <sstream>
#include <cctype> //toupper & tolower
using namespace std;

namespace DataStore{
    bool dadosSaoValidos(string);
};
namespace UserInterface{
    bool dadosSaoValidos(string);
};
//iii
//using namespace UserInterface;
//ii
//using UserInterface::dadosSaoValidos;

//iv
using namespace UserInterface;
using namespace DataStore;
int main(){

    // III
    //cout << "passar UserInterface" << dadosSaoValidos("passss") << endl;
    //cout << "passar DataStore" << DataStore::dadosSaoValidos("Passss") << endl;

    // II
    //cout << "passar UserInterface" << dadosSaoValidos("passss") << endl;
    //cout << "passar DataStore" << DataStore::dadosSaoValidos("Passss") << endl;

    //I
    //cout << "passar UserInterface" << UserInterface::dadosSaoValidos("passss") << endl;
    //cout << "passar DataStore" << DataStore::dadosSaoValidos("Passss") << endl;

    //IV
    //cout << "passar UserInterface" << dadosSaoValidos("passss") << endl;
    //cout << "passar DataStore" << dadosSaoValidos("Passss") << endl;
    // da erro de compilacao
    return 1;
}
bool UserInterface::dadosSaoValidos(string palavra){
    if ( 5 <= palavra.length() || 10 >= palavra.length()){
        return true;
    }
    return false;
}
bool DataStore::dadosSaoValidos(string palavra){
    if (isupper(palavra[0])){
        return true;
    }
    return false;
}
*/



/*                                                        //EX2
#include <iostream>
#include <string>
#include <sstream>
#include <cctype> //toupper & tolower
using namespace std;
void imprime(string frase);
void imprime(string frase, int numero);
void imprime(int numero, string frase);

int main(){
    imprime("programação orientada a objetos");
    imprime("horas por aula teórica ", 2);
    imprime(3, " horas em cada aula prática");
    return 0;
}

void imprime(string frase){cout << "\t" << frase <<endl;}
void imprime(string frase, int numero){cout << "\t" << frase << " " << numero <<endl;}
void imprime(int numero, string frase){cout << "\t" << numero << " " << frase <<endl;}
*/

/*                                                      //EX3
#include <iostream>
#include <string>
#include <sstream>
#include <cctype> //toupper & tolower
using namespace std;

int multiplica();
int multiplica(int n1);
int multiplica(int n1, int n2);
int multiplica(int n1, int n2, int n3);

//int multiplica(int n1 = 1, int n2 = 1, int n3 = 1);

int main(){
    cout << "\n" << multiplica() << "\n" << multiplica(5);
    cout << endl << multiplica(2,3) << endl << multiplica(2,3,4);
    return 0;
}

int multiplica(){
    return 1;
}
int multiplica(int n1){
    return n1;
}
int multiplica(int n1, int n2){
    return n1 * n2;
}
int multiplica(int n1, int n2, int n3){
    return n1 * n2 * n3;
}

 // c nao da para compilar porque
*/

/*                                                      //EX4
#include <iostream>
#include <string>
#include <sstream>
#include <cctype> //toupper & tolower
using namespace std;

void troca(int & a, int & b);

int main(){
    int a = 5, b = 10;
    troca(a, b);
    cout << "\na = " << a << "\nb = " << b;
} // deve aparecer a = 10 e b = 5

void troca(int & a, int & b){
    int temp;
     temp = a;
     a = b;
     b = temp;
    return ;
}
*/

/*                                                       //EX5
#include <iostream>
#include <string>
#include <sstream>
#include <cctype> //toupper & tolower
using namespace std;

int & seleciona(int & a, int & b, char letra){
    if (letra == 'm'){
        return a;
    }
    if (letra == 'M'){
        return b;
    }
    if (letra == 'p'){
        return a;
    }
    if(letra == 'u'){
        return b;
    }
    return a;
}

int main (){
    int a = 5, b = 10;
    seleciona(a, b, 'm') = 0;
    cout << "a = " << a << " b = " << b << endl; // aparece 0 10
    a = 5;
    b = 10;
    seleciona(a, b, 'M') -= 3;
    cout << "a = " << a << " b = " << b << endl; // aparece 5 7

    return 1;
}*/

                                                             //EX6
#include <iostream>
#include <string>
#include <sstream>
#include <cctype> //toupper & tolower
#include <cstdlib>
using namespace std;
const int tam = 3;
typedef struct {int matrix[tam][tam];}Matrix;
void Preencher(Matrix & aux, int p = 0);

void listar(Matrix aux);

int main(){
    Matrix m = {{{1,2,3},{2,3,4},{2,9,4}}};
    listar(m);
    Preencher(m);
    listar(m);
    return 0;
}

void listar(Matrix aux){
    for(int i = 0; i < tam ; i++) {
        for (int j = 0; j < tam; j++) {
            cout << aux.matrix[i][j] << " ";
        }
        cout << endl;
    }
    return;
}

void Preencher(Matrix & aux, int p){
    for(int i = 0; i < tam ; i++) {
        for (int j = 0; j < tam; j++)
            if(p == 1) {
                aux.matrix[i][j] = rand();
            }else{
                aux.matrix[i][j] = 6;
            }


    }
    return;
}
