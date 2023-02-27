#include "Computer.h"

char Computer::MakeMove(){
    move = 'R';
    return move;
}

Computer::Computer(){
    name = "Computer";
}

string Computer::getName(){
    return "Computer";
}