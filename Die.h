
#ifndef DIE_H
#define DIE_H
using namespace std;
class Die {
private:
    int value;
    int num_sides;
public:
    Die(int num_sides = 6);
    void roll();
    int get_value();
};

#endif //DIE_H
