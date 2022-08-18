#include <stdio.h>
#include<string.h>

int main(void) {
	// frequency count for charater
	
	int freq[128]={0};
	
	char str[]="Prashant sourya and rohith";
	
	for(int i=0; i<strlen(str); i++)
	{
	    freq[(int)str[i]]++;
	}
	
	for(int i=0; i<128; i++)
	{
	    if(freq[i] !=0)
	        printf("\n%c\t:\t%dtimes", i, freq[i]);
	}
	
	return 0;
}

