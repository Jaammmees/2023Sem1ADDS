#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player{
    private:
        std::string name;
    public:
        char MakeMove();
        std::string getName();
        Computer();

};

#endif