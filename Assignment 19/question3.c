#include <stdio.h>

int main(void) {
	
	int n;
	
	scanf("%d", &n);
	
	char str[n][200];
	
	for(int i=0; i<n; i++)
	{
	    fgets(str[i], 200, stdin);
	}
	
	for(int i=0; i<n; i++)
	{
	    printf("%s", str[i]);
	}
	
	return 0;
}

