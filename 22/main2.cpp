#include <iostream>

using namespace std;

struct Entity{
    static int x;
    void print(){
        cout << x << endl;
    }
};
int Entity::x;

int main() {
    Entity e1;
    e1.x = 1;
    Entity e2;
    e2.x = 2;
    e1.print();
    e2.print();
    
    cin.get();
}