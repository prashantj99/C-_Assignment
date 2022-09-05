#include <iostream>

using namespace std;

int power(int, int);

int main()
{
    int x, y;

    cin>>x>>y;

    cout<<"x^y : "<<power(x, y);

    return 0;
}

int power(int x, int y)
{
    int p=1;

    for(int i=1; i<=y; i++)
    {
        p*=x;
    }

    return p;
}
