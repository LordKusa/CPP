#include <iostream>
using namespace std;
	
void descifrar(int n){

	int cien, diez, uno, suma;

		cien =  n % 1000;
		n = (n/1000);
		diez = cien % 100;
		cien = (cien/100);
		uno = diez % 10;
		diez = (diez/10);
		
		cout << n << endl;
		cout << cien << endl;
		cout << diez << endl;
		cout << uno << endl;
		suma = n + cien + diez+ uno;
		cout << suma << endl;
}

int main (){
	
	int mil;

	cout << "Ingrese un numero de cuatro cifras." << endl;
	cin >> mil;
	descifrar(mil);
	
	return 0;
}
