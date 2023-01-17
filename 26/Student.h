#include <string> 
using namespace std;

class Student {
private:
    int num;
    string name;
    char gender;
public:
    Student();
    Student(int num, string name, char gender);
    ~Student();
    void display();
};
