#include <stdio.h>

int square(int);

int main(void) {
	// square of number
	int num;
	
	scanf("%d",&num);
	
    printf("%d",square(num));
    
	return 0;
}

int square(int n)
{
    return n*n;
}

