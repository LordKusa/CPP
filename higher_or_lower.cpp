#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void stop(){
    cout << "Presion enter para continuar";
    getchar();
}

int randomizar(){
    srand(time(0));
    return (rand() % 10);
}

int main (){
    int n;

    n = randomizar();
 
    return 0;
}