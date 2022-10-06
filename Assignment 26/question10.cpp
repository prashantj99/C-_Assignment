#include <iostream>
using namespace std;

class StaticCount
{
    private:
        static int count;
    public:
        static void printCount(){cout<<"count : "<<count<<endl;}
        void fun(){ count++;}
};

int StaticCount::count=0;

int main()
{
    StaticCount s1;
    
    s1.fun();
    s1.fun();
    s1.fun();

    StaticCount::printCount();

}