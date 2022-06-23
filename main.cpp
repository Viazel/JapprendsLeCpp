#include "Log/Log.h"
#include <iostream>

extern int s_Variable;

extern void Function();

int main(){
    std::cout << s_Variable << std::endl;
    Function();
    return 0;
}