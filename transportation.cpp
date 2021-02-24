#include <iostream>
using namespace std;

int main (){
    int pasajeros;
    cin >> pasajeros;
    cout << 50 - (pasajeros % 50);
    return 0;
}