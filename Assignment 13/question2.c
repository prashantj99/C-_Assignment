#include <stdio.h>

int sumOdd(int);

int main(void) {
	
	int n;
	
	scanf("%d",&n);
	
	printf("%d",sumOdd(n));
	
	return 0;
}

int sumOdd(int n)
{
    if(n==0)
        return 0;
    
    return (2*n-1)+sumOdd(n-1);
    
}

