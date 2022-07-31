#include <stdio.h>

void binary(int);

int main(void) {
	// print binary
	int num;
	
	scanf("%d",&num);
	
	binary(num);
	
	return 0;
}

void binary(int n)
{
    if(n==0)
        return;
        
    binary(n>>1);
    
    printf("%d",n&1);
}

