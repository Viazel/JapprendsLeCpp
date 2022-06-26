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
    int test;
public:
    Test(const std::string &name) : Player("AAA"), m_NameA(name) {}

    std::string GetName() {
        return m_NameA;
    }
};

void PrintName(Entity* entity) {
    std::cout << entity->GetName() << std::endl;
}

int main(){

    Player p("Salut");
    Entity e;
    Test t("Hey");

    PrintName(&p);
    PrintName(&e);
    PrintName(&t);


    return EXIT_SUCCESS;
}