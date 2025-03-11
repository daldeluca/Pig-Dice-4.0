using namespace std;
#include "Turn.h"
#include <iostream>
//
Turn::Turn() {
    score_this_turn = 0;
    turn_count = 0;
    turn_over = false;
    choice='\0';
}

int Turn:: get_score_this_turn() {
    return score_this_turn;
}

int Turn:: get_turn_count() {
    return turn_count;
}

void Turn:: reset_turn_score() {
    score_this_turn = 0;
}
void Turn::take_turn(){
    turn_count++;
    cout << "\nTURN " << turn_count << "\n";
    while(!turn_over) {
        cout<< "roll or hold? (r/h): ";
        cin >> choice;
        if(choice == 'r') {
            myDie.roll();
            cout<< "Die: " << myDie.get_value() << endl;
            if (myDie.get_value() == 1){
                cout << "Turn Over. No Score.\n";
                score_this_turn = 0;
                turn_over = true;
            }else {
                score_this_turn += myDie.get_value();
            }
        }
        else if(choice == 'h') {
            turn_over = true;
        }
        else {
            cout<<"Invalid choice! Try again."<<endl;
        }
    }
    turn_over = false;
}
