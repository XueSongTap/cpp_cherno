#include <iostream>
#include <string>



class Entity{
private:
    int X, Y;
    void Print(){};
public:
    Entity(){
        X = 0;
        Print();
    }
};

class Player: public Entity {   
public:
    Player(){
        X = 2;
        Print();
    }
};

int main() {
    Entity e;
    e.X = 2;
    e.Print();
    
    return 0;
}