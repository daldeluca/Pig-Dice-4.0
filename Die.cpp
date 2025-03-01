#include "Die.h"
#include <cstdlib>
using namespace std;

Die::Die(int num_sides) : num_sides(num_sides), value(1) {}

int Die::roll() {
  value = rand() % num_sides + 1;
  return value;
}