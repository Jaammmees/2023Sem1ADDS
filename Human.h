#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"


class Human : public Player{
    private:
        std::string name;
        char move;
    public:
        Human(std::string n);
        Human();
        virtual char MakeMove();
        virtual std::string getName();

};

#endif