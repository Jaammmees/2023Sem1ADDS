#ifndef Robot_H
#define Robot_H

#include "Move.h"

class Robot : public Move {
public:
    std::string getName();
};

#endif 