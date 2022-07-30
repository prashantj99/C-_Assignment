#include <stdio.h>
#include<math.h>

int isPrime(int);

int main(void) 
{
	int num;
	
	scanf("%d",&num);
	
	isPrime(num) ? printf("Yes") : printf("No");
	
	return 0;
}

int isPrime(int n)
{
    int flag=1;
    
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    
    return flag;
}