#include <stdio.h>

int hcf(int ,int);

int main(void) {
    
    int a ,b;
    
    scanf("%d %d",&a ,&b);
    
    printf("HCF : %d",hcf(a,b));
    
	return 0;
}

int hcf(int a ,int b)
{
    int hcf=1 ,min ,max ,i;
    if(a>b)
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a;
    }
    
    for(i=2; i<=min; i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    
    return hcf;
}