#include <stdio.h>

void square(int);

int main(void) {
    
    int num;
    
    scanf("%d",&num);
    
    square(num);
    
	return 0;
}

void square(int n)
{
    if(n==0)
        return ;
        
    square(n-1);
    
    printf("%d\t",n*n);
    
}