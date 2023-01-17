#include <iostream>
#include <string.h>
#include <stdlib.h>

int main() {
    const char name[8] = "Che\0rno";
    std::cout << strlen(name) << std::endl;
    
    const char name1[8] = "Cherno\0";
    std::cout << strlen(name1) << std::endl;

    const char name2[8] = "Cherno\0";
    // name2[2] = 'a';

    const char* name3 = "Cherno";

    char* name7 = (char*)"Cherno";

    char name4[8] = "Cherno";

    name4[2] = 'a';

    std::cout << name4 << std::endl;
}