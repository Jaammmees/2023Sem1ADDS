#include "Move.h"

Move::Move(std::string name){
    move = name;
}

std::string Move::getName(){
    return move;
}

bool Move::compare(Move* otherMove) {
    std::string otherName = otherMove->getName();

    if (move == "Rock") {
        return (otherName == "Scissors");
    }
    else if (move == "Paper") {
        return (otherName == "Rock");
    }
    else if (move == "Scissors") {
        return (otherName == "Paper");
    }
    else if (move == "Monkey") {
        return (otherName == "Robot");
    }
    else if (move == "Robot") {
        return (otherName == "Monkey" || otherName == "Pirate");
    }
    else if (move == "Pirate") {
        return (otherName == "Robot" || otherName == "Zombie");
    }
    else if (move == "Ninja") {
        return (otherName == "Pirate" || otherName == "Zombie");
    }
    else if (move == "Zombie") {
        return (otherName == "Monkey" || otherName == "Ninja");
    }

    return false;
}
