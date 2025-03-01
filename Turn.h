
#ifndef TURN_H
#define TURN_H
#include "Die.h"
#include "pgame.h"
using namespace std;

class Turn {
private:
    GameState& game;
    Die& die;

    public:
    Turn(GameState& game, Die& die);
    void take_turn();
};
#endif //TURN_H
