#include <stdio.h>
#include <string.h>

int compare(char *, char *);

int main(void) {
	// compare string
	
	int i=compare("others", "string");
	
	if(i < 0)
	{
	    printf("string 2 is greater");
	}
	else if( i > 0)
	{
	    printf("string 1 is greater");
	}
	else
	{
	    printf("Strings are equal");
	}
	
	return 0;
}

int compare(char *str1, char *str2)
{
    int len1=strlen(str1);
    int len2=strlen(str2);
    int i=0;
    
    for(i=0; (str1[i] == str2[i]) && (str1[i] || str2[i]); i++ );
    
    if((str1[i] == '\0') && (str2[i] == '\0'))
    {
        return 0;
    }
    else if( ((str1[i] !='\0') && (str2[i] == '\0')) || (str1[i] > str2[i]))
    {
        return 1;
    }
    else if(((str1[i] =='\0') && (str2[i] != '\0'))|| (str1[i] < str2[i]))
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

