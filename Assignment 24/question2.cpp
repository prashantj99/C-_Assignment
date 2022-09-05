#include <iostream>
using namespace std;

int getMaxDigit(int);

int main()
{
    int num;

    cin>>num;

    cout<<getMaxDigit(num);

    return 0;
}

int getMaxDigit(int num)
{
    int d=num%10;
    num/=10;

    while(num)
    {
        if((num%10)>d)
        {
            d=num%10;
        }
        num/=10;
    }

    return d;
}