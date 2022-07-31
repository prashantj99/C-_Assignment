#include <stdio.h>

void rev(int);

int main(void) {
	
	int num;
	
	scanf("%d",&num);
	
	rev(num);
	
	return 0;
}

void rev(int n)
{
    if(n==0)
        return;
    
    printf("%d",n%10);
    
    rev(n/10);
    
    
}
