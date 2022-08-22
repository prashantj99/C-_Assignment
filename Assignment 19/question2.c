#include <stdio.h>
#include<string.h>

int main(void) {
	//reverse string 
	
	char str[][50]={"delhi", "mumbai", "haryana", "uttarpardesh", "jharkhand", "kerela", "kolkata", "rajasthan", "kanpur", "lacknow"};
	int n=sizeof(str)/sizeof(str[0]);

    char temp[50];
    int flag=0;
    
    
    for(int i=0; i<n; i++)
    {
        flag=0;
        for(int j=0; j<n-1-i; j++)
        {
            if(strcmp(str[j], str[j+1]) > 0)
            {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j+1]);
                strcpy(str[j+1], temp);
                flag=1;
            }
        }
        
        if(!flag)
            break;
    }

	for(int i=0; i<n; i++)
	{
	    printf("%s\t", str[i]);
	}
	
	return 0;
}


