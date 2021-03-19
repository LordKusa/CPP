//Se solicita un prestamo por S pesos durante M meses a una tasa de interes mensual I. Al final de los M meses la cantidad adeudada es 
//S*(1+I)^M. Escribir un algoritmo al cual se le den los valores de S, M, e I, e informe la suma adeudada.
#include <iostream>
#include <math.h>
using namespace std;

int main(){

    float S, I;
    double deuda;
    int M;

    cout << "Ingrese cantidad de pesos del prestamo" << endl;
    cin >> S;

    cout << "Ingrese cantidad de meses del prestamo" << endl;
    cin >> M;

    cout << "Ingrese tasa de interes mensual del prestamo. (Sin simbolo de porcentaje)" << endl;
    cin >> I;

    deuda = S * pow((1+I), M);

    cout.precision(0);
    cout << "La suma adeudada es de " << fixed << deuda << " ARS.";

    return 0;
}