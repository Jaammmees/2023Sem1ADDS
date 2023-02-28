#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player{
    public:
        virtual char MakeMove();
        virtual std::string getName() = 0;
    
};

#endif