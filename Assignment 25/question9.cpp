#include <iostream>
using namespace std;

class Circle
{
    private:
        int r;
    public:
        int setRadius(int x){r=x;}
        float getArea() {return 3.14*r*r ;}
};

int main()
{
    Circle c;

    c.setRadius(5);
    cout<<c.getArea();

    return 0;
}