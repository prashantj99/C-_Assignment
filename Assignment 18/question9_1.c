#include <stdio.h>
#include<string.h>

void revstring(char *, int, int);

int main(void) {
	
	char str[]="Mysirg Education Services";
	
	int i=0, j=strlen(str)-1;
	
	revstring(str, i, j);
	
	i=0; 
	while(str[i])
	{
	    for(j=i; str[j] !=' ' && str[j] !='\0'; j++);
	    
	    revstring(str, i, j-1);
	    
	    i=j+1;
	    
	}
	
	printf("%s", str);
	
	return 0;
}

void revstring(char arr[], int i, int j)
{
    char ch;
    
    while(i<j)
    {
        ch=arr[i];
        arr[i]=arr[j];
        arr[j]=ch;
         
        i++;
        j--;
    }
}

