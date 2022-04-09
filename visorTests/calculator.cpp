#include "calculator.hpp"
#include <iostream>
#include <string>
using namespace std;

void Display::add(Digit digit){
    cout <<"\noi\n\n";

    switch(digit){
    case ZERO:  cout << " 0000\n 0  0\n 0  0\n 0  0\n 0000\n"; break;
    case ONE:   cout << " 1\n 1\n1 1\n1 1\n1"; break;
    case TWO:   cout << " 2222\n     2\n     2\n 2222\n 2    \n 2    \n 2222\n"; break;
    case THREE: cout << " 3333\n    3\n 3333\n    3\n 3333\n"; break;
    case FOUR:  cout << "     4\n   4 4\n 4444444\n     4\n     4\n"; break;
    case FIVE:  cout << " 5555\n 5   \n 5555\n    5\n 5555\n";break;
    case SIX:   cout << " 6666\n 6   \n 6666\n 6   6\n 6666\n"; break;
    case SEVEN:	cout << " 77777\n    7 \n   7 \n  7  \n 7  \n"; break;
    case EIGHT: cout << " 8888\n8    8\n 8888\n8    8\n 8888\n"; break;
    case NINE:  cout << " 9999\n 9  9\n 9999\n    9\n 9999\n"; break;
    default:
      std::cout << "'\n'";
    }
}
void Display::clear(){
    cout << "\n\n\n\n\n" ;
}