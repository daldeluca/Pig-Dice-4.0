
#ifndef DIE_H
#define DIE_H
using namespace std;
class Die {
private:
    int value;
    int num_sides;
public:
    Die(int num_sides = 6);
    int roll();
};

#endif //DIE_H
