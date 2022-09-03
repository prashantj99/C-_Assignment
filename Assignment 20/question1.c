#include <stdio.h>

void swap(int *, int *);

int main(void) {
	
	int a=10, b=20;
	
	printf("\nBefore swap a= %d and b=%d", a, b);
	
	swap(&a, &b);
	
	printf("\nAfter swap a= %d and b=%d", a, b);
	
	
	return 0;
}

void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
