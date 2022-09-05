#include <iostream>
using namespace std;

class Area
{
    public:
        float areaCircle(int r) { return 3.14*r*r;}
        int areaSquare(int a) { return a*a;}
        int areaRectangle(int l, int b) { return l*b;}
};

int main()
{
    Area a;

    cout<<"Area Of Circle : "<<a.areaCircle(2)<<endl;
    cout<<"Area Of Square : "<<a.areaSquare(2)<<endl;
    cout<<"Area Of Rectangle : "<<a.areaRectangle(2, 3);

    return 0;
}