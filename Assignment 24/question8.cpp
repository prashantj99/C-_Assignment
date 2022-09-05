#include <iostream>
using namespace std;

float area(int);//area of circle
int area(int, int);
float area(float, float);



int main()
{
    cout<<area(2)<<endl; //area of circle
    cout<<area(5, 4)<<endl;//area of rectangle
    cout<<area(2.0f,4.0f)<<endl;//area of triangle

    return 0;
}

float area(int r)
{
    return 3.14*r*r;
}

int area(int l, int b)
{
    return l*b;
}

float area(float l, float b)
{
    return l*b*0.5;
}
