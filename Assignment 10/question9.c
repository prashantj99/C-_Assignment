#include <stdio.h>

int checkDigit(int ,int);

int main(void) {
	int num ,d;
	
	scanf("%d %d",&num ,&d);
	
	checkDigit(num,d)? printf("Yes") : printf("No");
	
	return 0;
}

int checkDigit(int n ,int d)
{
    int r ,flag=0;
    while(n)
    {
        r=n%10;
        if(r==d)
            flag=1;
        n/=10;
    }
    
    return flag;
}
