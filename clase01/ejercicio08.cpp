//Diseñe un algoritmo para sumar dos marcas de tiempo dadas en dias, horas, minutos y segundos
#include <iostream>
using namespace std;

int main(){

    int s1, s2, s3, sm, m1, m2, m3, mh, h1, h2, h3, hd, d1, d2, d3;

    cout << "Ingrese la primer marca de tiempo" << endl << "Ingrese segundos";
    cin >> s1;
    cout << "Ingrese minutos";
    cin >> m1;
    cout << "Ingrese horas";
    cin >> h1;
    cout << "Ingrese dias";
    cin >> d1;

    cout << "Ingrese la segunda marca de tiempo" << endl << "Ingrese segundos";
    cin >> s2;
    cout << "Ingrese minutos";
    cin >> m2;
    cout << "Ingrese horas";
    cin >> h2;
    cout << "Ingrese dias";
    cin >> d2;

    sm = (s1+s2)/60;
    s3 = (s1+s2) % 60;

    mh = (m1 + m2 + sm) / 60;
    m3 = (m1 + m2 + sm) % 60;

    hd = (h1 + h2+ mh) / 24;
    h3 = (h1 + h2+ mh) % 24;

    d3 = hd+d1+d2;

    cout << "La marca de tiempo total es " << d3 << ":" << h3 << ":" << m3 << ":" << s3;

	return 0;
}