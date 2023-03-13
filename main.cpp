#include "Truckloads.h"
#include "Reverser.h"
#include "EfficientTruckloads.h"
#include <iostream>

using namespace std;

int main(){
    Reverser reverse;
    cout << reverse.reverseDigit(-5) << endl;
    cout << reverse.reverseDigit(356) << endl;
    cout << reverse.reverseString("James") << endl;
    cout << reverse.reverseString("") << endl;

    EfficientTruckloads test;
    cout << test.numTrucks(20,5) << endl;
    cout << test.numTrucks(20,5) << endl;
    cout << test.numTrucks(25,5) << endl;
    return 0;
}