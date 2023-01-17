#include <iostream>
#include <array>

int main() {
    int a[5];
    int count = sizeof(a) / sizeof(int);
    std::cout << count << std::endl;

    std::array<int, 5> another;
    int sizeAnother = another.size();

    std::cout << sizeAnother << std::endl;

    return 0;
}