#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>
using namespace std;

int main() {
    Player* human = new Human("Mei");
    Player* computer = new Computer();
    Referee* referee = new Referee();

    Player* winner = referee->refGame(human, computer);

    if (winner == nullptr) {
        cout << "Tie" << endl;
    } else {
        cout << winner->getName() << endl;
    }

    return 0;
}