#include <iostream>
using namespace std;

class Complex
{
    private:
        int a, b;
    public:
        void setRI(int x, int y){ a=x; b=y;}
        int getR(){return a;}
        int getI(){return b;}
        friend Complex operator+(Complex, Complex);
        friend Complex operator+(int, Complex);
        Complex operator+(int k)
        {
            Complex temp;
            temp.a=a;
            temp.b=k+b;
            return temp;
        }
        void show(){cout<<a<<" + "<<b<<"i"<<endl;}

};

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.a=c1.a+c2.a;
    temp.b=c1.b+c2.b;
    return temp;
}

Complex operator+(int k, Complex c2)
{
    Complex temp;
    temp.a=k+c2.a;
    temp.b=c2.b;
    return temp;
}

int main()
{
    Complex c1, c2, c3;
    c1.setRI(2,4);
    c2.setRI(12, 5);
    c1.show();
    c2.show();

    c3=c1+c2;
    c3.show();
    
    c3=5+c2;
    c3.show();
    c3=c1+5;
    c3.show();
    return 0;
}