#include <stdio.h>

int main(void) {
	// your code goes here
	int x=20, *p, **q, ***r;
	
	p=&x;
	q=&p;
	r=&q;
	
	printf("%d %d %d %d", x, *p, **q, ***r);
	printf("\n%d %d %d %d", &x, p, *q, **r);
	
	return 0;
}

