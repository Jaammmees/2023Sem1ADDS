#include "Computer.h"

using namespace std;

Move* Computer::makeMove(){
    std::string moves[] = {"Rock", "Paper", "Scissors", "Robot", "Monkey", "Pirate", "Ninja", "Zombie"};
    int index = rand() % 8;
    return new Move(moves[index]);
}

Computer::Computer(){
    srand(time(NULL));
    name = "Computer";
}

string Computer::getName(){
    return name;
}