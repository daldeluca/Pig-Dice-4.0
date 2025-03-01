using namespace std;
#include "Turn.h"
#include <iostream>
//
Turn::Turn(GameState &game, Die &die) : game(game), die(die) {}

void hold(GameState& game) {
    game.score += game.turn_score;
    cout << "Score for turn: " << game.turn_score << endl;
    cout << "Total Score: " << game.score << endl;
    if (game.score >= 20) {
        game.game_over = true;
    }
}
void Turn::take_turn(){
    game.turn_score = 0;
    char letter;
    while(game.game_over == false) {
        cout<< "roll or hold? (r/h): ";
        cin >> letter;
        if(letter == 'r') {
            int roll = die.roll();
            cout<< "Die: " << roll << endl;
            if (roll == 1){
                cout << "Turn Over. No Score.\n";
                game.turn_score = 0;
                return;

            }else {
                game.turn_score += roll;
            }
        }
        else if(letter == 'h') {
            hold(game);
            return;
        }
        else {
            cout<<"Invalid choice! Try again."<<endl;
        }
    }
}
