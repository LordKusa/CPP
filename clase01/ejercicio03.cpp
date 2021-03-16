#include <iostream>
using namespace std;

int main (){

    //Calcular la velocidad promedio de un auto sabiendo la distancia recorrida y el tiempo que tardo en recorrerla

    float km, mts, min, seg, cseg;

	cout << "Ingrese la distancia de la carrera en metros.";
	cin >> mts;
	
	cout << "Ingrese los minutos que tardo el auto.";
	cin >> min;
	
	cout << "Ingrese los segundos que tardo el auto.";
	cin >> seg;
	
	cout << "Ingrese las centesimas de segundo que tardo el auto.";
	cin >> cseg;
	
	seg = seg + (cseg / 100);
	seg = seg + (min * 60);
	km = (mts/seg) * 3.6;
	
	cout << "La velocidad promedio es de " << km << "Km/h.";
    
    return 0;
}