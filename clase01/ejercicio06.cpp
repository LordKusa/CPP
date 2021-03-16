//Diseñe un algoritmo para ingresarle la longitud de los catetos de un triangulo rectangulo y muestre la longitud de la hipotenusa

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float cateto1, cateto2, hipotenusa;

    cout << "Ingrese la longitud del cateto 1" << endl;
    cin >> cateto1;
    cout << "Ingrese la longitud del cateto 2" << endl;
    cin >> cateto2;

    hipotenusa = sqrt(cateto1 + cateto2);

    cout << "La longitud de la hipotenusa es " << hipotenusa << endl;

    return 0;
}