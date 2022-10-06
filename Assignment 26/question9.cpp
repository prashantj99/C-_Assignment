#include <iostream>
#include <string.h>
using namespace std;

class Bill
{
    private:
        int cid, c_unit;
        char name[100];
        float bill;
        
    public:

        Bill(){cid=0; c_unit=0; strcpy(name, "guest"); bill=0.0f;}

        void setId(int x){ cid=x;}
        void setName(char n[100]){strcpy(name, n);}
        void setCunit(int x){c_unit=x;}

        int getCid(){return cid;}
        float getBill(){return bill;}
        int getCunit(){return c_unit;}
        char * getName(){return name;}

        void get()
        { 
            cout<<"Enter CID : ";
            cin>>cid;
            
            cin.ignore(1);
            
            cout<<"Enter Name : ";
            cin.get(name, 100);

            cout<<"Enter  Unit : ";
            cin>>c_unit;
        }
        void calBill();
        void display(){cout<<cid<<":"<<name<<":"<<c_unit<<":"<<bill<<endl;}
};

void Bill::calBill()
{
    int unit=c_unit;
    switch (unit > 100)
    {
    case 1 :
        bill=100*1.20f;
        unit-=100;
        switch (unit > 100)
        {
        case 1:
            bill+=100*2;
            unit-=100;
            bill+=unit*3;
            break;
        
        case 0:
            bill+=unit*2;
            break;
        }
        break;

    case 0 : 
        bill=unit*1.20;
        break;
    }

}

int main()
{
    Bill b;
    
    b.get();
    b.calBill();
    b.display();

    return 0;
}