#include <stdio.h>

int seriesSum(int n);
int fact(int);

int main(void) {
	int n;
	
	scanf("%d",&n);
	
	printf("%d",seriesSum(n));
	
	return 0;
}

int fact(int n)
{
    int f=1;
    
    while(n)
    {
        f*=n--;
    }
    
    return f;
}

int seriesSum(int n)
{
    int sum=0;
    
    for(int i=1; i<=n; i++)
    {
        sum+=fact(i)/i;
    }
    
    return sum;
}