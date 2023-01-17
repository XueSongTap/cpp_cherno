#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(): num(-1), name("None"), gender('N'){}

Student::Student(int n, string p, char g) : num(n), name(p), gender(g) {
    cout << "执行构造函数: " << "Welcome, " << name << endl;
}


void Student::display() {
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "gender: " << gender << endl;
    cout << "===============" << endl;
}

Student::~Student() {
    cout << "执行析构函数: " << "Bye bye, " << name << endl;
}