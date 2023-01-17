#include "Student.h"
#include <iostream>

using namespace std;

int main() {
    Student student1(1, "Little while", 'f');
    Student student2(2, "Big white", 'f');
    
    student1.display();
    student2.display();

    return 0;
}