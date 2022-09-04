#include <iostream>
using namespace std;

int main()
{
    int a, b;
    
    cin>>a>>b;

    cout<<"Before : a="<<a<<" b="<< b<<endl;
    
    //swap
    a=a^b;
    b=a^b;
    a=a^b;

    cout<<"After : a="<<a<<" b="<< b<<endl;

    return 0;
}