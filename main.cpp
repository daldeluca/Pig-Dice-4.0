#include <iostream>
#include "pgame.h"
#include "Turn.h"
#include "Die.h"
using namespace std;

//testing push
int main() {

    GameState game = {0, 0, false};
    Die die(6);
    display_rules();
    Turn current_turn(game, die);
    int turn_count = 0;
    while (!game.game_over) {
        turn_count++;
        cout << "TURN " << turn_count << endl;
        current_turn.take_turn();
    }
    cout << "You finished with a final score of 20 or more in "<< turn_count << " turns!"<<endl;

    return 0;
}
