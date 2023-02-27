#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

class Human : public Player{
    public:
        char move;
        string name;
        Human(string n);
        Human();
        virtual char MakeMove();
        virtual string getName();

};

#endif