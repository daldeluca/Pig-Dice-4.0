#include "Die.h"
#include <cstdlib>
#include <ctime>
#include <bits/locale_classes.h>
using namespace std;

Die::Die(int num_sides) : num_sides(num_sides), value(1) {}

void Die::roll() {
  srand(time(0));
  value = rand() % num_sides + 1;
}

int Die::get_value() {
  return value;
}
