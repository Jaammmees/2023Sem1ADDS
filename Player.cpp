#include "Player.h"
#include "iostream"
using namespace std;

Move* Player::makeMove(){
    string move;
    cout << "Enter move: ";
    cin >> move;
    return new Move(move);
}

