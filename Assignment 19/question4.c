#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	
	char str[][100]={"delhi", "patna", "rajasthan", "pryagraj"};
	char temp[100];
	
	int n=sizeof(str)/sizeof(str[0]);
	
	scanf("%s", temp);
	
	while(n)
	{
	    if(!strcmp(str[n--], temp))
	    {
	        printf("found %s at position %d", temp, n+2  );
            break;
	    }
	}
	
	if(n == 0)
	{
	    printf("Not found");
	}
	return 0;
}

