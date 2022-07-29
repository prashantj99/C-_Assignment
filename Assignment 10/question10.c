#include <stdio.h>
#include<math.h>

int getNextPrime(int);
void getPrimeFactors(int);

int main(void) {
	
	int num;
	
	scanf("%d",&num);
	
	getPrimeFactors(num);
	
	return 0;
}


void getPrimeFactors(int num)
{
    int prime=2;
	
	while(num!=1)
	{
	    if(num%prime==0)
	    {
	        printf("%d\t",prime);
	        num/=prime;
	    }
	    else
	    {
	        prime=getNextPrime(prime);
	    }
	}
    
}
int getNextPrime(int n)
{
    int next=n;
    int flag=1;
    
    while(1)
    {
        flag=1;
        next++;
        for(int i=2; i<=next-1 ;i++)
        {
            if(next%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
           return next;
    }
    
    return next;
}
