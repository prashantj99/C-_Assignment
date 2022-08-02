#include <stdio.h>

int sum(int [] ,int);

int main(void) {
	int size=10;
	
	int a[10]={0};
	
	for(int i=0; i<size; i++)
	    scanf("%d",&a[i]);
	    
	printf("sum  : %d",sum(a ,size));    
    
	return 0;
}

int sum(int a[] ,int size)
{
    int s=0;
    
    for(int i=0; i<=size; i++)
        s+=a[i];
        
    return s;
}
