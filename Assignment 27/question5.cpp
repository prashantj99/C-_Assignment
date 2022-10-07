#include <iostream>
using namespace std;

class Number
{
    private:
        int x, y, z;
    public:
        
        Number(){x=0; y=0; z=0;}

        void setXYZ(int a, int b, int c){ x=a; y=b; z=c;}
        int getX(){ return x;}
        int getY(){ return y;}
        int getZ(){ return z;}

        Number operator-()
        {
            x=-x;
            y=-y;
            z=-z;

            return *this;
        }

        void displayNumber(){ cout<<x<<":"<<y<<":"<<z<<endl;}
};

int main()
{
    Number n1, n2;

    n1.setXYZ(24, 23, 56);
    n1.displayNumber();
    n2=-n1;
    n1.displayNumber();
    n2.displayNumber();

    return 0;
}

