#include <stdio.h>

void octal(int);

int main(void) {
	// print octal
	int num;
	
	scanf("%d",&num);
	
	octal(num);
	
	return 0;
}

void octal(int n)
{
    if(n==0)
        return ;
        
    octal(n/8);
    
    printf("%d",n%8);
    
}

