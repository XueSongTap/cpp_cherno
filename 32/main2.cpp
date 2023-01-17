#include <iostream>
#include <string>

void PrintString(std::string string){
    string += " hello!";
    std::cout << string << std::endl;
}


void PrintString2(const std::string& string){
    // string += " hello!";
	std::cout << string << std::endl;
}

int main() {
    std::string name = "Cherno";
    PrintString(name);
    
    std::cout << name << std::endl;
}