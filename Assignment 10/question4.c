#include <stdio.h>

void printUptoN(int);

int main(void) {
    int n;
    
    scanf("%d",&n);
    
	printUptoN(n);
	
	return 0;
}

void printUptoN(int n)
{
    for(int i=1; i<=n; i++){
        printf("%d\t",i);
    }
}

