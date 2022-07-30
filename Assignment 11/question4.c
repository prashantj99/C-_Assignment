#include <stdio.h>
#include<math.h>

int isPrime(int);
int nextPrime(int);

int main(void) 
{
	int num;
	
	scanf("%d",&num);
	
	printf("Next Prime Of %d is %d",num ,nextPrime(num));
	
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

int nextPrime(int n)
{
    while(1)
    {
        n++;
        if(isPrime(n))
        {
            return n;
        }
    }
}