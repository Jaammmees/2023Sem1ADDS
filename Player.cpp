#include "Player.h"
#include "iostream"
using namespace std;

char Player::makeMove(){
    char move;
    cout << "Enter move: ";
    cin >> move;
    return move;
}

