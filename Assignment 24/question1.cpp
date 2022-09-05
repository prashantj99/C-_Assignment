#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int);

int main()
{
    int num;

    cin>>num;

    cout<<isPrime(num)<<endl;


    return 0;
}

bool isPrime(int num)
{
    int f=1;

    if(num<=1)
        return 0;

    for(int i=2; i<sqrt(num); i++)
    {
        if(num%i == 0)
        {
            f=0;
            break;
        }
    }

    return f;
}