#include <stdio.h>
#include<string.h>
#include<stdlib.h>


int main(void) {
	char str[][100]={"123.23.12.1", "234.56.78.90", "89.256.256.12"};
	int n=sizeof(str)/sizeof(str[0]);
	
	for(int i=0; i<n; i++)
	{
	    char *ptr=strtok(str[i], ".");
	    int flag=1;
	    while(ptr !=NULL)
	    {
	        int num=atoi(ptr);//passing address of string
	        if(num>255 || num<0)
            {
                flag=0;
                break;
            }
            ptr=strtok(NULL, "."); //continue with prev string
	    }
	    
	    if(flag)
	        printf("Valid\n");
        else
            printf("Invalid\n");
            
	}
	
	
	return 0;
}

