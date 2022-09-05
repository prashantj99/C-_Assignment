#include <iostream>
using namespace std;

int add(int, int);
float add(float, float);
float add(float, int);

int main()
{
    cout<< add(2.3f, 22)<< endl;
    cout<< add(2.3f, 2.89f)<< endl;
    cout<< add(4, 22)<< endl;
    cout<< add('a', 'b')<< endl;
    return 0;
}

int add(int a, int b) {return a+b ;}
float add(float a, int b) {return a+b ;}
float add(float a, float b) {return a+b ;}