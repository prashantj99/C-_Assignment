#include <stdio.h>

int lcm(int ,int);

int main(void) {
    
    int a ,b;
    
    scanf("%d %d",&a ,&b);\
    
    printf("Lcm : %d",lcm(a,b));
    
	return 0;
}

int lcm(int a ,int b)
{
    int max ,min ,lcm;
    
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
    
    lcm=a*b;
        
    for(int i=max ,j=2; ; j++)
    {
        if((i*j)%min==0)
        {
            lcm=i*j;
            break;
        }
        
    }
    
    return lcm;
}

