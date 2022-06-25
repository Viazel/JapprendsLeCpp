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
    Entity e;
    std::cout << e.X << std::endl;
    e.print();
    return EXIT_SUCCESS;
}