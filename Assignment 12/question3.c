#include <stdio.h>

void printOdd(int);

int main(void) {
	int num;
	
	scanf("%d",&num);
	
	printOdd(num);
	
	return 0;
}

void printOdd(int num)
{
    if(num>=1)
    {
        printOdd(num-1);
        
        printf("%d\t",2*num-1);
    }
}

