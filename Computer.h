#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

class Computer : public Player{
    private:
        std::string name;
    public:
        virtual char MakeMove();
        virtual std::string getName();
        Computer();

};

#endif