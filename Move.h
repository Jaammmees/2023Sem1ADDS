#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move {
private:
    std::string move;
public:
    Move(std::string name);
    virtual std::string getName();
    bool compare(Move *otherMove);
};

#endif
