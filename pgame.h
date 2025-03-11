
#ifndef PGAME_H
#define PGAME_H
#include <iostream>

#include "Turn.h"

using namespace std;


class PGame {
private:
    Turn myTurn;
    int game_score;
    bool game_over;
public:
    PGame() {
        game_score = 0;
        game_over = false;
        play_game();
    }
   void display_rules() {
    cout << "Let's Play PIG Dice!\n* See how many turns it takes you to get to 20.\n* Turn ends when you hold or roll a 1.\n* If you roll a 1, you lose all points for the turn.";
    cout << "\n* If you hold, you save all points for the turn.\n";
    }

    void play_game() {
       display_rules();
       while(!game_over) {
           myTurn.take_turn();
           game_score += myTurn.get_score_this_turn();
           cout << "Score for turn: " << myTurn.get_score_this_turn() << "\n";
           myTurn.reset_turn_score();
           cout << "Total score: " << game_score << "\n";
           if (game_score >= 20) {
               game_over = true;
           }
       }
        cout << "You finished with a final score of 20 or more in "<< myTurn.get_turn_count() << " turns!"<<endl;
   }

};


#endif //PGAME_H
