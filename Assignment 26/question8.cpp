#include <iostream>
using namespace std;

class Bank
{
    private:
        int p, t;
        float r, si;
    public:

        Bank(){p=0; t=0; r=0.0f; si=0.0f;}
        void input()
        {
            cout<<"\nEnter princple amount : ";
            cin>>p;
            cout<<"\nEnter  Rate of Interest : ";
            cin>>r;
            cout<<"\nEnter Year : ";
            cin>>t;
        }

        void cal_si(){ si=p*r*t/100;}
        void display(){cout<<"si = "<<si;}

};

int main()
{
    Bank b;
    b.display();
    b.input();
    b.cal_si();
    b.display();
    return 0;
}