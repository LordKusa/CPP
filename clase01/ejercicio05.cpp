//Dados dos números almacenados en las direcciones de memoria A y B, escribir un algoritmo que intercambie dichos valores

#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    cout << "Ingrese un valor para A" << endl;
    cin >> a;
    cout << "Ingrese un valor para B" << endl;
    cin >> b;

    c = a;
    a = b;
    b = c;

    cout << "Ahora A vale " << a << " y B vale " << b << ".";

    return 0;
}