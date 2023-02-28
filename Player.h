#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player{
    public:
        virtual char makeMove();
        virtual std::string getName() = 0;
    
};

#endif