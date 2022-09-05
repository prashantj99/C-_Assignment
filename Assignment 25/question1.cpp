#include <iostream>
using namespace std;

class Complex
{
    private:
        int real, img;

    public:
        void set(int r, int i){real=r; img=i;};
        void display(){cout<<real<<" + "<<img<<"i"<<endl;}
};

int main()
{
    Complex c1, c2;
    c1.set(2, 3);
    c2.set(4, 3);

    c1.display();
    c2.display();
    
    return 0;
}