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
        return (otherName == "Robot" || otherName == "Ninja");
    }
    else if (move == "Robot") {
        return (otherName == "Ninja" || otherName == "Zombie");
    }
    else if (move == "Pirate") {
        return (otherName == "Robot" || otherName == "Monkey");
    }
    else if (move == "Ninja") {
        return (otherName == "Pirate" || otherName == "Zombie");
    }
    else if (move == "Zombie") {
        return (otherName == "Pirate" || otherName == "Monkey");
    }

    return false;
}
