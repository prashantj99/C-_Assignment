#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int l, b;
    public:
        int setDimension(int x, int y){l=x; b=y;}
        int getArea() {return l*b;}
};

int main()
{
    Rectangle rect;

    rect.setDimension(2, 3);
    cout<<rect.getArea();

    return 0;
}