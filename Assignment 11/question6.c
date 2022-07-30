#include <stdio.h>
#include<math.h>

int isPrime(int);
void printPrime(int ,int);

int main(void) 
{
	int from ,to;
	
	scanf("%d %d",&from ,&to);
	
	printPrime(from ,to);
	
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

void printPrime(int from ,int to)
{
    for(int i=from+1; i<to; i++)
    {
        if(isPrime(i))
        {
            printf("%d\t",i);
        }
    }
}