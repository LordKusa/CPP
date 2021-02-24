/*A bus can carry 50 passengers at a time.
Given the number of passengers waiting at the bus station as entrance, 
it is necessary to calculate and generate how many empty seats the last bus will have.

Input example: 126
Output example: 24

Explanation: The first bus will carry 50 passengers, leaving 126-50 = 76 at the station. 
The next one will leave 26 at the station, so the last one will carry all 26 passengers, having 50-26 = 24 empty seats.*/

#include <iostream>
using namespace std;

int main (){
    int passengers;
    cin >> passengers;
    cout << 50 - (passengers % 50);
    return 0;
}