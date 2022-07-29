#include <stdio.h>

int fact(int);

int main(void) {
    int n;
    
    scanf("%d",&n);
    
    printf("Factorial of %d is %d",n ,fact(n));
	
	return 0;
}

int fact(int n)
{
    int fact=1;
    int i=1;
    
    while(i<=n)
    {
        fact*=i;
        i++;
    }
    
    return fact;
    
}
