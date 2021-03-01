#include <iostream>
using namespace std;

int main (){

    //Calcular el área de un rombo conociendo sus diagonales.

    float diagonal1, diagonal2, area;
    cout << "Ingrese la primer diagonal del rombo" << endl;
    cin >> diagonal1;
    cout << "Ingrese la segunda diagonal" << endl;
    cin >> diagonal2;
    area = (diagonal1 * diagonal2)/2;
    cout << "El area del rombo es " << area;

    return 0;
}