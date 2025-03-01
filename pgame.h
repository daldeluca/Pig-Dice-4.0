//
// Created by administrator on 2/28/25.
//

#ifndef PGAME_H
#define PGAME_H
#include <iostream>

using namespace std;


struct GameState {
    int score;
    int turn_score;
    bool game_over;
};

inline void display_rules() {
    cout << "Let's Play PIG Dice!\n* See how many turns it takes you to get to 20.\n* Turn ends when you hold or roll a 1\n* If you roll a 1, you lose all points for the turn";
    cout << "\n* If you hold, you save all points for the turn\n";
}

#endif //PGAME_H
