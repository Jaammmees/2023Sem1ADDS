#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player{
    public:
        string name;
        char move;
        virtual char MakeMove();
        virtual string getName();
    
};


#endif