#include "Player.h"
#include "iostream"

string Player::getName(){
    cout << name << endl;
    return name;
}

char Player::MakeMove(){
    cout << "Enter move: ";
    cin >> move;

    return move;
}