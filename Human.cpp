#include "Human.h"
#include <iostream>

Human::Human(){
    name = "Human";
}

Human::Human(string n){
    name = n;
}

string Human::getName(){
    return name;
}

char Human::MakeMove(){
    cout << "Enter move: ";
    cin >> move;

    return move;
}
