#include <iostream>
using namespace std;

class Factorial
{
    private:
        int num;
    public:
        int setNum(int c){num=c;}
        int fact();
};

int Factorial::fact()
{
    int f=1;
    int i=num;

    while(i)
    {
        f*=i--;
    }
    
    return f;
}

int main()
{
    Factorial f1; 
    f1.setNum(5);
    cout<<f1.fact()<<endl; 
    return 0;
}