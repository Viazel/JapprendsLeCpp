#include "Log.h"
#include <iostream>
#include <string>

class Entity {
public:
    virtual std::string GetName() {
        return "Entity";
    }
};

class Player : public Entity {
private:
    std::string m_Name;
public:
    Player(const std::string& name) : m_Name(name) {}

    std::string GetName() {
        return m_Name;
    }
};

class Test : public Player {
private:
    std::string m_NameA;
public:
    Test(const std::string &name) : Player("AAAA"), m_NameA(name) {}

    std::string GetName() {
        return m_NameA;
    }
};

void PrintName(Entity* entity) {
    std::cout << entity->GetName() << std::endl;
}

int main(){

    Entity* e = new Entity();
    PrintName(e);

    Player* p = new Player("Viazel");
    PrintName(p);

    Test* aaa = new Test("PPP");
    std::cout << aaa->GetName() << std::endl;
    PrintName(aaa);

    return EXIT_SUCCESS;
}