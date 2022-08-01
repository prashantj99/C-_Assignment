#include <stdio.h>

int countDigit(int);

int main(void) {
	
	int num;
	
	scanf("%d",&num);
	
	printf("Number of Digits : %d", countDigit(num));
	
	return 0;
}

int countDigit(int n)
{
    if(n==0)
        return 0;
        
    return 1+countDigit(n/10);
}