#include "Referee.h"
#include "iostream"

using namespace std;

Referee::Referee(){};

Player* Referee::refGame(Player *player1, Player *player2){
    Move* p1move = player1->makeMove();
    Move* p2move = player2->makeMove();

    if (p1move->compare(p2move)) {
        cout << "Player 2 played: " << p2move->getName() << endl;
        return player1;
    } else if (p2move->compare(p1move)) {
        cout << "Player 2 played: " << p2move->getName() << endl;
        return player2;
    } else {
        cout << "Player 1 played: " << p1move->getName() << endl;
        cout << "Player 2 played: " << p2move->getName() << endl;
        return nullptr;
    }
}