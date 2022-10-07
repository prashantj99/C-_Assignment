#include <iostream>
using namespace std;

class Complex
{
    private:
        int real, img;

    public:
        
        void setRI(int x, int y){ real=x; img=y;}
        int getReal(){return real;}
        int getImg(){return img;}

        void show(){ cout<<real<<" + "<<img<<"i"<<endl; }

        Complex operator+(Complex c)
        { 
            Complex t;
            t.real=real+c.real;
            t.img=img+c.img;
            return t;
        }

        Complex operator-(Complex c)
        {
            Complex t;
            t.real=real-c.real;
            t.img=img-c.img;
            return t;
        }

        friend bool operator==(Complex, Complex);

        Complex operator*(Complex c)
        {
            Complex t;

            t.real=real*c.real-(img*c.img);
            t.img=img*c.real+real*c.img;
            return t;

        }

};

bool operator==(Complex c1, Complex c2)
{
    bool flag=0;

    if((c1.real == c2.real) && (c1.img == c2.img) )
        flag=1;

    return flag;
    
}

int main()
{
    Complex c1, c2, c3;

    c1.setRI(2,3);
    c1.show();
    c2.setRI(4,6);
    c2.show();
    c3=c1+c2;
    c3.show();

    c3=c1-c2;

    c3.show();

    c3=c1*c2;

    c3.show();

    if(c1 == c2)
    {
        cout<<"Equal"<<endl;

    }
    else
    {
        cout<<"Not Equal"<<endl;
    }

    return 0;
    
}