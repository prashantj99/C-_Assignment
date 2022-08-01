#include <stdio.h>

int sumSquare(int);

int main(void) {
	
	int n;
	
	scanf("%d",&n);
	
	printf("%d",sumSquare(n));
	
	return 0;
}

int sumSquare(int n)
{
    if(n==0)
        return 0;
    
    return n*n+sumSquare(n-1);
    
}

