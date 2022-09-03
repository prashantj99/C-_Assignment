#include <stdio.h>

int main(void) {
	
	int a, b;
	
	int *p=&a;
	int *q=&b;
	
	scanf("%d %d", p, q);
	
	(*p > *q) ? printf("a is greater") : printf("b is greater");
	
	
	return 0;
}

