#include <iostream>
#include <cstring>

class Entity {
private:
    int* i;

public:

   Entity(const int& i) {
       this->i = new int(i);
   }

   Entity(const Entity& entity) {
       i = new int(entity.GetInt());
   }

   const int& GetInt() const {
       return *i;
   }

   void SetInt(const int& index) {
       *i = index;
   }

   ~Entity() {
       delete i;
   }
};

int main(){

    std::string aa = "Salut";

    std::cout << aa.length() << std::endl;

    return 0;
}