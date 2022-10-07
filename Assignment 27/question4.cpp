#include <iostream>
using namespace std;

class Time
{
    private:
        int hour, min, sec;
    public:

        Time(){hour=0; min=0; sec=0;}
        Time(int h, int m, int s){hour=h; min=m; sec=s;}

        void setH(int x){ hour=x;}
        void setM(int x){ min=x;}
        void setS(int x){ sec=x;}

        int getH(){return hour;}
        int getM(){return min;}
        int getS(){return sec;}

        void display(){cout<<hour<<":"<<min<<":"<<sec<<endl;}
        
        friend bool operator==(Time, Time);// can be a instance member function
        friend istream & operator>>(istream &is, Time &t);
        friend ostream & operator<<(ostream &os, Time t);
};

istream & operator>>(istream &is, Time &t)
{
    cout<<"Enter Hour : ";
    is>>t.hour;

    cout<<"Enter Minute : ";
    is>>t.min;

    cout<<"Enter Second : ";
    is>>t.sec;

    //adjust seconds
    t.min=t.min+t.sec/60;
    t.sec=t.sec%60;

    //adjust minutes
    t.hour=t.hour+t.min/60;
    t.min%=60;

    if(t.hour > 24){
        t.hour=-1;
    }

    return is;
}

ostream & operator<<(ostream &os, Time t)
{
    if(t.hour == -1)
    {
        cout<<"Invalid Time";
        return os;
    }

    os<<"Hours : "<<t.hour<<endl;
    os<<"Minutes : "<<t.min<<endl;
    os<<"Seconds : "<<t.sec<<endl;
    return os;
}

bool operator==(Time t1, Time t2)
{
    if(t1.hour == -1 || t2.hour == -1)
    {
        cout<<"Invalid Time";
        return 0;
    }

    if(t1.hour == t2.hour && t1.min == t2.min && t1.sec == t2.sec)
        return true;
    else
        return false;
        
}

int main()
{
    // Time t1(12, 11, 30), t2(1, 20, 0), t4, t5;
    // Time t3=t1;

    // t1.display();
    // t2.display();

    // t1==t2 ? cout<<"Equal" : cout<<"Unequal";

    // cout<<endl;

    // t1==t3 ? cout<<"Equal" : cout<<"Unequal";

    // //insertion operator 

    // cin>>t4;
    // // t4.display();

    // cin>>t5;
    // // t5.display();

    // cout<<t4<<endl;
    // cout<<t5<<endl;


    Time t1, t2;
    cout<<"Enter First Time : "<<endl;
    cin>>t1;
    cout<<endl;

    cout<<"Enter Second Time : "<<endl;
    cin>>t2;
    cout<<endl;

    cout<<t1<<endl;
    cout<<t2<<endl;

    t1==t2 ? cout<<"Equal" : cout<<"UnEqual";

    return 0;
}