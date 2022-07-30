#include <stdio.h>

void printPascal(int);
int fact(int);
int nCr(int ,int);

int main(void)
{
    int rows;
    
    scanf("%d",&rows);
    
	printPascal(rows);
	
	return 0;
}

int fact(int n)
{
    int f=1;
    
    while(n)
    {
        f*=n--;
    }
    
    return f;
}

int nCr(int n ,int r)
{
    return fact(n)/(fact(n-r)*fact(r));
}

void printPascal(int rows)
{
    for(int i=0; i<=rows;i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("%d\t",nCr(i,j));
        }
        printf("\n");
    }
}