#include "Computer.h"

using namespace std;

char Computer::makeMove(){
    return 'R';
}

Computer::Computer(){
    name = "Computer";
}

string Computer::getName(){
    return name;
}