#include <iostream>

using namespace std;

int sum(int, int, int=0);

int main()
{
    int a, b, c;

    cin>>a>>b>>c;

    cout<<sum(a, b)<<endl;
    cout<<sum(a, b, c)<<endl;

    return 0;
}

int sum(int a, int b, int c)
{
    return (a+b+c);
}