#include <iostream>
#include <string.h>

using namespace std;

class Student
{
private:
    int rollno, age;
    char name[100];
public:
    Student(int , char[100], int);
    void display(){cout<<rollno<<":"<<name<<":"<<age<<endl;}

};

Student::Student(int r, char n[100], int a)
{
    rollno=r;
    age=a;
    strcpy(name, n);
}

int main()
{
    Student s(23, "Prashant", 20);
    s.display();
    return 0;
}



