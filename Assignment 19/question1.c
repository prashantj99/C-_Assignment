#include <stdio.h>
#include<string.h>

int main(void) {
	
	//no of vowels
	
	char str[5][50]={
	    "MysirG",
	    "Education",
	    "Services",
	    "Sourav shukla",
	    "sir"
	};
	
	for(int i=0; i<5; i++)
	{
            fgets(str[i], 50, stdin);
	}
	
	
	int count=0;
	
	for(int i=0; i<5; i++)
	{
	    count=0;
	    
	    for(int j=0; j<strlen(str[i]); j++)
	    {
	        switch(str[i][j])
	        {
	            case 'A':
	            case 'E':
	            case 'I':
	            case 'O':
	            case 'U':
	                    count++;
	                    break;
                case 'a':
	            case 'e':
	            case 'i':
	            case 'o':
	            case 'u':
	                    count++;
	                    break;
	        }
	        
	    }
	    
	    printf("\nNo of Vowels in \"%s\" is %d", str[i], count);
	        
	}
	
	
	return 0;
}

