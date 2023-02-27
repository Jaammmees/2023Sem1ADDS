#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player{
    public:
        string name;
        char move;
        char MakeMove();
        string getName();
        Computer();

};

#endif