#include "Referee.h"
#include "iostream"

Referee::Referee(){};

Player* Referee::refGame(Player *player1, Player *player2){
    Move* p1move = player1->makeMove();
    Move* p2move = player2->makeMove();

    if (p1move->compare(p2move)) {
        return player1;
    } else if (p2move->compare(p1move)) {
        return player2;
    } else {
        return nullptr;
    }
}