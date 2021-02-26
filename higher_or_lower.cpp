#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void stop(){
    cout << "Presion enter para continuar" << endl;
    getchar();
}

int randomizar(){
    srand(time(0));
    return (rand() % 10);
}

int main (){
    int n, m;

    n = randomizar();

    cout << "Ingrese un número entre 0 y 10";
    cin >> m;  
    while ((m < 0) || (m > 10)){
        cout << "Ingrese un número entre 0 y 10";
        cin >> m;
    }

    return 0;
}