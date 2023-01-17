#include <iostream>


int main() {
    int example[5];
    example[0] = 2;
    int * ptr = example;

    example[2] = 5;
    
    *(ptr + 2) = 5;

    *(int*)((char*)ptr + 8) = 5;

    for (int i = 0; i < 5; i ++) {
        example[i] = 2;
    }

    std::cout << example[2] << std::endl;
    std::cout << example << std::endl;

    return 0;
}