#include "Log.h"
#include <iostream>

class Entity {
public:
    float X, Y;

    Entity(){
        std::cout << "Constructed Entity" << std::endl;
        X = 0.0f;
        Y = 0.0f;
    }

    Entity(float x, float y){
        X = x;
        Y = y;
    }

    ~Entity(){
        std::cout << "Destroyed Entity" << std::endl;
    }

    void print(){
        std::cout << X << ", " << Y << std::endl;
    }
};

int main(){
    int* test = (int*) malloc(sizeof(int) * 99);

    test[0] = 2;
    test[1] = 8;
    test[2] = 9;
    test[3] = 6;
    test[4] = 89;
    test[5] = 26311;

    for (int i = 0; i < 99; ++i) {
        std::cout << test[i] << std::endl;
    }

    std::cout << "--------------------" << std::endl;

    realloc(test, sizeof(int) * 6);

    for (int i = 0; i < 99; ++i) {
        std::cout << test[i] << std::endl;
    }

    free(test);

    return EXIT_SUCCESS;
}