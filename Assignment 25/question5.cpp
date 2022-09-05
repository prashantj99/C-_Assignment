#include <iostream>
using namespace std;

class ReverseNumber
{
    private:
        int num;
    public:
        void setNum(int x){num=x;}
        int getReverseNumber();
};

int ReverseNumber::getReverseNumber()
{
    int i=num, r, rev=0;
    while(i)
    {
        r=i%10;
        rev=rev*10+r;
        i/=10;        
    }
    return rev;
}

int main()
{
    ReverseNumber r;

    r.setNum(523);

    cout<<r.getReverseNumber();
    
    return 0;
}