#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	
	char user[100][2][100];
	int count=0, i=0;
	int ch=0;
	int flag=0;
	
	do
	{
	    count++;// no of accounts created
    	printf("\n----------Create Account-----------");
    	
    	printf("\nEnter your Name : ");
    	scanf("%s", user[i][0]);
    	
    	printf("----------------------");
    	
    	printf("\nEnter your Password : ");
    	scanf("%s", user[i][1]);
    	
    	printf("wants to create more account (1/0) : ");
    	scanf("%d", &ch);
    	
    	if(ch)
    	    i++;
    	
    	system("cls");
	}while(ch);
	
	do
	{
        printf("\n----------Login---------------------");
    	
    	char name[100];
    	char passwd[100];
    	
    	printf("\nName : ");
    	scanf("%s", name);
    	
    	printf("\nPassword : ");
    	scanf("%s", passwd);
    	
    	flag=0;
    	
    	for(int i=0; i<count; i++)
    	{
    	    if((strcmp(user[i][0], name)==0) && (strcmp(user[i][1], passwd)==0))
    	    {
    	        flag=1;
    	        break;
    	    }
    	}
    	
    	if(flag)
    	{
    	    printf(":) welcome, %s", user[i][0]);
            break;
    	}
        else
            printf("Invalid Credentials!!!");
            
	
        printf("wants to try again (1/0) : ");
    	scanf("%d", &ch);	
	    system("cls");
        
	}while(ch);
    	
	return 0;
}

