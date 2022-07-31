#include <stdio.h>

void printRev(int);

int main(void) {
	int num;
	
	scanf("%d",&num);
	
	printRev(num);
	
	return 0;
}

void printRev(int n)
{
    if(n==0)
        return;
    
    printf("%d\t",n);
    
    printRev(n-1);
}
