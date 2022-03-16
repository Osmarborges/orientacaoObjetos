#include <iostream>
#include <stdlib.h>
#include <stdbool.h>

using namespace std;

class NO{

public:
    NO* prox;
    int dado;
    NO(int dado){
        this->dado = dado;
        this ->prox = NULL;
    }

};
