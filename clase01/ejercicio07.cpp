//Escribir un algoritmo que permita ingresar la longitud de un lado de un triangulo equilatero y muestre su perimetro y su area
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float lado, area, altura, perimetro;

    cout << "Ingrese la longitud de un lado del triangulo." << endl;
    cin >> lado;

    altura = (sqrt(3)*lado)/2;
    area = (lado * altura)/2;
    perimetro = lado * 3;
    
    cout << "El area del triangulo es " << area << ", el perimetro es " << perimetro << " y la altura " << altura;

	return 0;
}