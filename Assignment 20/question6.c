#include <stdio.h>

int main(void) {
	// your code goes here
	char str[]="pranjal_kushvaha";
	
	char *ptr=str;
	
	int i;
	
	for(i=0; ptr[i]; i++);
	
	printf("%d", i);
	
	return 0;
}

