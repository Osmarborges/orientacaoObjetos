#ifndef CALC
#define CALC

#include <iostream>
#include <cmath>
#define MAX_DIGITS 8
using namespace std;
enum Digit: unsigned char{
    ZERO,
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE
};

class Display{
  public:
    void add(Digit );
    void clear();

    	
};

#endif