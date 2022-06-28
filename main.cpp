#include <iostream>
#include <string>

class Entity {
private:
    std::string m_Name;
public:
    Entity(const std::string& name) : m_Name(name) {}
    Entity() {
        m_Name = "Unknow";
    };

    const std::string& GetName() const {return m_Name;}
};

int main(){

    Entity e;
    std::cout << e.GetName() << std::endl;

    Entity e1("The Cherno");
    std::cout << e1.GetName() << std::endl;

    return EXIT_SUCCESS;
}