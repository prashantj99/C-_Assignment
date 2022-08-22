#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void) {
	
	char str[][50]={"the", "quick", "brown", "fox", "quick"};
	
	int n= sizeof(str)/sizeof(str[0]);
	
	char w1[]="quick", w2[]="fox";
	
	int x=-1, y=-1, min=100;
	
	for(int i=0; i<n; i++)
	{
	    if(!strcmp(str[i], w1))
	    {
	        x=i;
	    }
	    
	    if(!strcmp(str[i], w2))
	    {
	        y=i;
	    }
	    
	    int d=abs(x-y);
	    if(x!=-1 && y!=-1 && (min>d))
	        min=d;
	}
	
	if(min!=100)
	    printf("%d", min);
    else
        printf("undefine");
	
	
	return 0;
}

