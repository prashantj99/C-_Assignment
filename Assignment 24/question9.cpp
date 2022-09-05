#include <iostream>
using namespace std;

int max(int, int);
float max(float, float);

int main()
{
    cout<< max(3, 4) <<endl;
    cout<< max(2.3, 2.31) <<endl;
    return 0;
}

int max(int a, int b)
{
    return (a > b ? a: b);
}

float max(float a, float b)
{
    return (a > b ? a: b);
}