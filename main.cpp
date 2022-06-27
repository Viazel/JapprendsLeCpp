#include <iostream>
#include <string>

class Printable {
public:
    virtual std::string GetClassName() = 0;
    virtual std::string GetAge() = 0;
};

class Entity : public Printable {
public:
    virtual std::string GetName() {return "Entite";}
    std::string GetClassName() override {return "TMTC";}
    std::string GetAge() override {return "18";}
};

class Player : public Entity {
private:
    std::string m_Name;

public:
    Player(const std::string name) : m_Name(name) {}
    std::string GetName() override {return m_Name;}
    std::string GetClassName() override {return "Player";}
    std::string GetAge() override {return "28";}
};

void Print(Printable* e){
    std::cout << e->GetAge() << std::endl;
}


int main(){
    int a = 9;
    int** aa = (int**) malloc(sizeof(int*) * 3);
    for (int i = 0; i < 3; ++i) {
        aa[i] = (int*) malloc(sizeof(int) * 3);
    }
    aa[0][1] = 8;
    std::cout << *(*aa + 1) << std::endl;
    free(aa);
    return EXIT_SUCCESS;
}