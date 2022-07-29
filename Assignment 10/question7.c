#include <stdio.h>

int nCr(int ,int);//function declaration
int fact(n);

int main(void) {
    int n ,r;
    scanf("%d %d",&n ,&r);
    
    printf("C(%d %d) : %d",n ,r ,nCr(n ,r));
	
	return 0;
}

int fact(int n)
{
    int fact=1 ,i=1;
    while(i<=n)
    {
        fact*=i++;
    }
    return fact;
}

int nCr(int n ,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}