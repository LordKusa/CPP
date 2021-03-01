#include <iostream>
using namespace std;

//Algoritmo que calcula el área y el perímetro de un rectangulo.

int main(){

    float base, altura, area, perimetro;
    cout << "Ingrese la base del rectangulo" << endl;
    cin >> base;
    cout << endl << "Ingrese la altura del rectangulo" << endl;
    cin >> altura;
    area = base * altura;
    perimetro = (2 * base) + (2 * altura);
    cout << endl << "El area del rectangulo es " << area << endl << "El perimetro del rectangulo es " << perimetro;
    return 0;
}