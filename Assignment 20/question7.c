#include <stdio.h>
#include <string.h>

int main(void) {
	
	char *str="hello, this is pointer illustration";
	int v=0, c=0;
	for(int i=0; i<strlen(str); i++)
	{
	    if
	    (
	        str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
	        || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'
	    )
	    {
	        v++;
	    }
	    else if( (str[i] >='B' && str[i] <= 'Z') || (str[i] >='b' && str[i] <= 'z'))
	    {
	        c++;
	    }
	}
	
	printf("vowels : %d \t consonant : %d", v, c);
	
	
	return 0;
}

