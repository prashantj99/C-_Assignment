#include <stdio.h>

int sumDigit(int);

int main(void) {
	
	int n;
	
	scanf("%d",&n);
	
	printf("%d",sumDigit(n));
	
	return 0;
}

int sumDigit(int n)
{
    if(n==0)
        return 0;
    
    return n%10+sumDigit(n/10);
    
}

