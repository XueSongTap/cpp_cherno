#include <iostream>

using namespace std;

struct Entity{
    static int x;
    static void print(){
        cout << x << endl;
    }
};
int Entity::x;

int main() {
    Entity e1;
    Entity::x=1;
    Entity e2;
    Entity::x =2;
    Entity::print();
    Entity::print();
    
    cin.get();  
}