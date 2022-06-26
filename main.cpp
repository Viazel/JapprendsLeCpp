#include "Log.h"
#include <iostream>
#include "Table.h"
#include <string>
#include <map>

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
    int test;
public:
    Test(const std::string &name) : Player("Salut"), m_NameA("APPP") {}

    std::string GetName() {
        return m_NameA;
    }
};

void PrintName(Entity* entity) {
    std::cout << entity->GetName() << std::endl;
}

int main(){

    std::map<std::string, int> list;
    list["Salt"] = 8;

    std::cout << list.find("Salt")->second << std::endl;

    return EXIT_SUCCESS;
}