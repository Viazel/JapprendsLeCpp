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

    Printable* e = new Entity();
    e->GetClassName();

    Entity a;
    Player p("Viazel");

    Print(e);
    Print(&p);

    return EXIT_SUCCESS;
}