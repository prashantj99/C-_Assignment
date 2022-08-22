#include <stdio.h>
#include<string.h>

int fact(int num)
{
    int f=1;
    
    while(num)
    {
        f*=num--;
    }
    
    return f;
}

int main(void) {
	
	char str[][100]={"mysirg", "prateek", "rahul", "neeti"};
    int n=sizeof(str)/sizeof(str[0]);
    int flag=0;
    
    char name[100];
    
    printf("Enter your name : ");
    scanf("%s", name);
    
    
    for(int i=0; i<n; i++)
    {
        
        if(!strcmp(str[i], name))
        {
            flag=1;
            break;
        }
        
    }
    
    if(flag)
    {
        int num;
        printf("\nEnter num : ");
        scanf("%d", &num);
        printf("\nfactorial : %d", fact(num));
    }
    else
    {
        printf("\nbad credential!!!");
    }
    
    	
	return 0;
}

