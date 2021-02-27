#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int randomizar(){
    srand(time(0));
    return (rand() % 10);
}

int main (){
    int n, m;

    n = randomizar();

    cout << "Ingrese un numero entre 0 y 10" << endl;
    cin >> m;  
    while ((m < 0) || (m > 10)){
        cout << "Ingrese un numero entre 0 y 10" << endl;
        cin >> m;
    }

    while (m!=n){
        if (m < n){
            cout << "El numero ingresado es menor" << endl;
            
        }else{
            cout << "El numero ingresado es mayor" << endl;
        }
        cin >> m;
    }

    system("pause");
    
    return 0;
}