#include "Reverser.h"
#include <cmath>
using namespace std;
//reverse digit
//extract each number and then re add it by timesing it by 10
int Reverser::reverseDigit(int value){
    if(value < 0){
        return -1;
    }
    if(value<10){
        return value;
    } else {
        int remainder = value % 10;
        return remainder * pow(10, floor(log10(value))) + reverseDigit(value/10);
    }
}

string Reverser::reverseString(string characters){
    
    if(characters.size()==0){
        return "ERROR";
    }

    if(characters.size() == 1){
        return characters;
    } else {
        char lastLetter = characters.back();
        characters.pop_back();
        return lastLetter + reverseString(characters);
    }

}