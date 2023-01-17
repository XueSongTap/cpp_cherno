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
    e1.x = 2;

    cin.get();
}