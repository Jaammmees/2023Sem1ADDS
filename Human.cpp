#include "Human.h"
#include "iostream"

using namespace std;

Human::Human(){
    name = "Human";
}

Human::Human(string n){
    name = n;
}

string Human::getName(){
    return name;
}

char Human::makeMove(){
    cout << "Enter Move: ";
    cin >> move;
}


