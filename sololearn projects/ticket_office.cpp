/*Each ticket costs 10 dollars.
The office is carrying out a discount campaign: each group of 5 people receives a discount, 
which is determined according to the age of the youngest person in the group.
You need to create a program that takes the ages of the 5 people as input and generates a total price of the tickets.

Input example:
55
28
15
38
63

Output example: 42.5

The youngest age is 15 years old, so the group gets a 15% discount on the total price, which is $50 - 15% = $42.5*/

#include <iostream>
using namespace std;

//WARNING: To be optimized.

int main(){
    int ages[5];
    int youngest = 99;
    float discount, age;

    for (int i = 0; i < 5; ++i){
        cin >> ages[i];
        if (youngest > ages[i]){
            youngest=ages[i];
        }
    }

    age = youngest;
    discount = age/100;
    cout << 50*(1-discount);

    return 0;
}