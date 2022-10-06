#include <iostream>
using namespace std;

class Time
{
    private:
        int h, m, s;
    public:
        void setTime(int x, int y, int z){h=x; m=y; s=z;}
        void showTime(){ cout<<h<<":"<<m<<":"<<s<<endl;}
        void normalize();
        Time add(Time);
};

void Time::normalize()
{
    h+=m/60;
    m=m%60;
    m+=s/60;
    s=s%60;
}

Time Time::add(Time t)
{
    Time t1;
    t1.h=h+t.h;
    t1.m=m+t.m;
    t1.s=s+t.s;
    t1.normalize();

    return t1;
}

int main()
{
    Time t1, t2, t3;

    t1.setTime(2,30,56);
    t1.showTime();

    t2.setTime(11,30,145);
    t2.showTime();

    t1.normalize();
    t1.showTime();

    t2.normalize();
    t2.showTime();

    t3=t1.add(t2);
    t3.showTime();

    return 0;
}