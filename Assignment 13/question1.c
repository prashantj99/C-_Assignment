#include <stdio.h>

int sum(int);

int main(void) {
	
	int n;
	
	scanf("%d",&n);
	
	printf("%d",sum(n));
	
	return 0;
}

int sum(int n)
{
    if(n==0)
        return 0;
    
    return n+sum(n-1);
    
}

