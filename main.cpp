#include <iostream>
#include <cstring>

class Entity {
private:
    char* m_Name;
    char* m_Pseudo;
    unsigned int m_Size;
    unsigned int m_Size_Pseudo;
public:

    explicit Entity(const char* name) {
        m_Size = strlen(name) + 1;
        m_Size_Pseudo = sizeof(char) * 7 + 1;
        m_Name = new char[m_Size];
        m_Pseudo = new char[m_Size_Pseudo];
        memcpy(m_Name, name, m_Size);
        memcpy(m_Pseudo, "Nothing", m_Size_Pseudo);
    }

    Entity(const Entity& entity) : m_Size(entity.m_Size), m_Size_Pseudo(entity.m_Size_Pseudo){
        m_Name = new char[m_Size];
        memcpy(m_Name, entity.m_Name, m_Size);
        m_Pseudo = new char[m_Size_Pseudo];
        memcpy(m_Pseudo, entity.m_Pseudo, m_Size_Pseudo);
    }

    ~Entity() {
        delete[] m_Pseudo;
        delete[] m_Name;
    }

    const char* GetName() const {return m_Name;}

    void SetName(const char* string) {
        m_Size = strlen(string) + 1;
        m_Name = new char[m_Size];
        memcpy(m_Name, string, m_Size);
    }

    void SetPseudo(const char* string) {
        m_Size_Pseudo = strlen(string) + 1;
        m_Pseudo = new char[m_Size_Pseudo];
        memcpy(m_Pseudo, string, m_Size_Pseudo);
    }

    const char* GetPseudo() const {return m_Pseudo;}

};

int main(){

    Entity e("Salu");

    e.SetName("PPPPPPP");

    Entity p = e;

    p.SetPseudo("PPP");

    std::cout << p.GetPseudo() << std::endl;

    return 0;
}