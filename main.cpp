#include <iostream>
#include <cstring>

class String {
private:
    char* m_Buffer;
    int* test;
    unsigned int m_Size;
public:
    String(const char* string) {
        m_Size = strlen(string);
        test = new int(56);
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, string, m_Size);
        m_Buffer[m_Size] = 0;
    }

    String(const String& other) : m_Size(other.m_Size){
        m_Buffer = new char[m_Size + 1];
        test = new int(56);
        memcpy(m_Buffer, other.m_Buffer, m_Size + 1 );
        memcpy(test, other.test, sizeof(int));
    }

    ~String() {
        delete[] m_Buffer;
        delete test;
    }

    int* GetTest() const {
        return test;
    }

    const unsigned int& GetLength() const {
        return m_Size;
    }

    char& operator[] (const int& index) const {
        return m_Buffer[index];
    }

    friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string) {
    stream << string.m_Buffer;
    return stream;
}

int main(){
    String string = "Salut";
    String test = string;
    *(test.GetTest()) = 8;
    std::cout << *(string.GetTest()) << std::endl;
    return 0;
}