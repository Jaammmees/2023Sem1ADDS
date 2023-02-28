#include "Player.h"
#include "iostream"
using namespace std;

char Player::MakeMove(){
    char move;
    cout << "Enter move: ";
    cin >> move;
    return move;
}

