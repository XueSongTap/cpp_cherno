#include <iostream>
#include <string>

class Entity{
private:
    int m_X, m_Y;
    int * m_P;
    int *C, D;
    int* A, *B;
    mutable int var;

public:
    int GetX() const{
        var = 2;
        return m_X;
    }

    const int* const GetP() const {
        return m_P;
    }

    void SetX(int x) {
        m_X = x;
    }
};

void PrintEntity(const Entity& e) {
    std::cout << e.GetX() << std::endl;


};

int main() {
    Entity e;
    PrintEntity(e);
    return 0;
}