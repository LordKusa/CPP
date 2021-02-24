/*Given a number N as input, generate numbers from N to 1 on separate lines.
Also, when the current countdown number is a multiple of 5, the app should produce a "Beep".

Input example: 7
Output example: 7
6
5
Beep
4
3
2
1*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int x = n; x > 0; x--){
        switch(x){
        case 1:
            cout << x;
            break;
        default:
            cout << x << endl;
            if(x%5 == 0){
                cout << "Beep" << endl; 
            }
        }
    }

    return 0;
}