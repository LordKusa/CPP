#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void stop(){
    cout << "Presion enter para continuar";
    getchar();
}

int main (){
    int n;

    srand(time(0));
    n = rand() % 10;
    cout << n << endl;
    stop();
    return 0;
}