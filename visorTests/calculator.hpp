#ifndef CALC
#define CALC

#include <iostream>
#include <cmath>
#define MAX_DIGITS 8
using namespace std;
enum Digit: unsigned char{ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};

class Display{
  public:
    void add(Digit digit){
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
void clear(){
    cout << "\n\n\n\n\n" ;
}
    protected:
    	
};
// enum Digit: unsigned char
// {
//     ZERO = 0,
//     ONE,
//     TWO,
//     THREE,
//     FOUR,
//     FIVE,
//     SIX,
//     SEVEN,
//     EIGHT,
//     NINE
// };
// 
// enum Operation: unsigned char
// {
//     PLUS = 10,
//     MINUS,
//     TIMES,
//     DIVIDED,
//     SQTR,
//     PERCENT,
//     NONE
// };
// 
// enum Control: unsigned char
// {
//     MEMORY = 17,
//     MEMORY_PLUS,
//     MEMORY_MINUS,
//     CLEAR,
//     EQUALS,
//     OFF
// };
// 
// 
// class Cpu;
// class Keyboard;
// 
// class Display
// {
// public:
//     void add(Digit digit);
//     void add(Operation op);
//     void add(Control command);
//     void show(Cpu *cpu);
//     void clear();
// };
// 
// class Key
// {
// protected:
//     Keyboard *keyboard;
    // Digit digit;
// 
// public:
    // Key(Digit d) : digit(d) {}
//     /*void press() {
//         this->keyboard->receivereceiveDigit(this->digit);
//     } */
//     virtual void press() = 0;
//     void setKeyboard(Keyboard *keyboard);
// };
// 
// class Control_key: public Key
// {
//     Control command;
//     public:
//     Control_key(Control comm);
//     void press();
// 
//     
// };
// 
// class Digit_key: public Key
// {
//     Digit digit;
//     public:
//     Digit_key(Digit d);
//     void press();
// };
// 
// class Operation_Key: public Key
// {
//     Operation op;
//     public:
//     Operation_Key(Operation op);
//     void press();
// };
// 
// class Keyboard
// {
//     Key *keys[200];
//     int KeysCount;
//     Cpu *cpu;
// 
// public:
// 
//     Keyboard(Cpu *cpu);
// 
//     void addKey(Key *key);
//     void receiveKeyPress(Digit d);
//     void receiveKeyPress(Operation op);
//     void receiveKeyPress(Control command);
// };
// 
// class Cpu
// {
//     Display *display;
//     Digit *arg1;
//     int count1;
//     Operation op;
//     Digit *arg2;
//     int count2;
// 
//     void left_align(int arg);
//     void clear_array(Digit *array);
// 
// 
//     int convert_to_int(Digit *arg, int count);
// 
// 
//     void convert_to_digit(int arg, Digit *result);
// 
// 
//     public:
//     Cpu(Display *display);
//     void receiveInput(Digit d);
//     void receiveInput(Operation op);
//     void receiveInput(Control command);
//     void operate();
//     Digit *getOperand1();
//     int get_count1();
//     Digit *getOperand2();
//     int get_count2();
//     Operation getOperation();
// };
#endif