#include "Computer.h"

using namespace std;

Move* Computer::makeMove(){

    return new Move("Rock");
}

Computer::Computer(){
    name = "Computer";
}

string Computer::getName(){
    return name;
}