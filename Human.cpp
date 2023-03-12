#include "Human.h"
#include "iostream"

using namespace std;

Human::Human(){
    name = "Human";
}

Human::Human(string n){
    name = n;
}

Move* Human::makeMove(){
    string move;
    cout << "Enter move: ";
    cin >> move;
    return new Move(move);
}

string Human::getName(){
    return name;
}

