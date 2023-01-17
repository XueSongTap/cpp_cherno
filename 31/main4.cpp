#include <iostream>

class Entity{

public:
    static constexpr int size = 5;

    int example[size];

    Entity() {
        for (int i = 0; i < size; i ++){
            example[i] = 2;
        }
    }
};

int main(){
    Entity e;
    std::cout << e.example[2] << std::endl;

    return 0;
}