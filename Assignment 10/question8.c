#include <stdio.h>

int nPr(int ,int);
int fact(n);

int main(void) {
    int n ,r;
    scanf("%d %d",&n ,&r);
    
    printf("the number of arrangements one can make from %d items and %d selected at a time. : %d",n ,r ,nPr(n ,r));
	
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

int nPr(int n ,int r)
{
    return fact(n)/fact(n-r);
}