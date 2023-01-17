#include <iostream>

using namespace std;

void Function() {
    static int i = 0;
    i ++;
    std::cout << i << std:: endl;
}

int main() {
    Function();
    Function();
    Function();
}