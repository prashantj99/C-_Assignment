#include <stdio.h>

void printN(int n);

int main(void) {
	int num;
	
	scanf("%d",&num);
	
	printN(num);
	
	return 0;
}

void printN(int n)
{
    if(n==0)
        return;
        
    printN(n-1);
    
    printf("%d\t",n);
}

