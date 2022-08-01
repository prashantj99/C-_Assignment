#include <stdio.h>

int hcf(int ,int);

int main(void) {
    
    int a ,b;
    
    scanf("%d %d",&a ,&b);
    
    printf("%d",hcf(a,b));
    
	return 0;
}

int hcf(int a ,int b)
{
    if(a==b)
        return a;
    
    if(a>b)
    {
        hcf(a-b,b);
    }
    else
    {
        hcf(a,b-a);
    }
}

