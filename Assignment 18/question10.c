#include <stdio.h>
#include <string.h>

int main(void) {
	// count repeat character
	
	char str[]="allahabad";
    int len=strlen(str);
    
	int freq[256]={0};
	
	
	for(int i=0; i<len; i++)
	{
	    freq[(int)str[i]]++;
	}
	
	for(int i=0; i<256; i++)
	{
	    if(freq[i] !=0)
	    {
	        printf("\n%c : %d times", i, freq[i] );
	    }
	}
	
	return 0;
}

