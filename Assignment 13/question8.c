#include <stdio.h>

int fab(int);

int main(void) {
	
    int n;
    
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
        printf("%d\t",fab(i));
    
	return 0;
}

int fab(int n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    
    return fab(n-1)+fab(n-2);
}

