#include <stdio.h>
#include<math.h>

int isPrime(int);
void printPrime(int);

int main(void) 
{
	int num;
	
	scanf("%d",&num);
	
	printPrime(num);
	
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

void printPrime(int n)
{
    for(int i=2; i<=n; i++)
    {
        if(isPrime(i))
        {
            printf("%d\t",i);
        }
    }
}