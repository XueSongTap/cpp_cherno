#include <iostream>
#include <string>

int main(){
    std::string name = "Chenro";

    int nameSize = name.size();

    std::cout << name << std::endl;

    std::string name1 = "Cherno";

    name1 += " Hello!";
    std::cout << name1 << std::endl;

    std::string name2 = std::string("Cherno") + " Hello!";

    std::cout << name2 << std::endl;

    bool contains = name.find("no") != std::string::npos;

    return 0;

}