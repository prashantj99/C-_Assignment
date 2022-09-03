#include <stdio.h>

int main(void) {
	// your code goes here
	
	char *str = "this is string";
	
	int len;
	
	for(len =0 ; str[len]; len++);
	
	for(int i= len ; i>=0 ; i--)
	{
	    printf("%c", *(str + i));
	}
	
	return 0;
}

