#include <stdio.h>

int main(void) {
    int n;
    
    scanf("%d",&n);
    
    for(int i=1; i<=n ;i++)
        printf("%d\t",2*i-1);
    
	return 0;
}

