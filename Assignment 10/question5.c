#include <stdio.h>

void printOdd(int);

int main(void) {
	int n;
	
	scanf("%d",&n);
	
	printOdd(n);
	
	return 0;
}

void printOdd(int n)
{
    int i=1;
    
    while(i<=n)
    {
        printf("%d\t",i);
        i+=2;
    }
}


