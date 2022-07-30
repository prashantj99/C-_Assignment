#include <stdio.h>

void printFab(int);

int main(void) {
	
	int terms;
	
	scanf("%d",&terms);
	
	printFab(terms);
	
	return 0;
}

void printFab(int terms)
{
    int a=0 ,b=1 ,next;
    
    printf("%d\t",a);
	printf("%d\t",b);
    
	for(int i=1; i<=terms-2; i++)
	{
	    next=a+b;
	    printf("%d\t",next);
	    a=b;
	    b=next;
	}
}
