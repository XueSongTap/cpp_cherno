#include <iostream>
#include <string.h>
#include <stdlib.h>


int main() {
    const char* name = u8"Cherno";
    std::cout << name << std::endl;

    const wchar_t* name2 = L"Cherno";
    std::cout << name << std::endl;


    const char16_t* name3 = u"Cherno";
    std::cout << name << std::endl;

	const char32_t* name4 = U"Cherno"; // 4 byte per character: it uses utf32


    std::cout << name << std::endl;
}