#include <iostream>

using namespace std;

int main()
{
    int a=0, b=1, n, flag=0;
    int next=a+b;

    cin>>n;
    
    while(next <=n)
    {
        if(next == n)
        {
            flag=1;
            break;
        }
        a=b;
        b=next;
        next=a+b;
    }

    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }



    return 0;
}