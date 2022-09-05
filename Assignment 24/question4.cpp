#include <iostream>

using namespace std;

void printPascal(int);
int nCr(int, int);
int factorial(int n);

int main()
{
    int n;

    cin>>n;

    printPascal(n);

    return 0;
}

void printPascal(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<nCr(i,j);            
        }
        cout<<endl;
    }
}

int factorial(int n)
{
    int f=1;

    while(n)
    {
        f*=n--;
    }

    return f;
}

int nCr(int n, int r)
{
    return (factorial(n)/(factorial(n-r)*factorial(r)));
}

