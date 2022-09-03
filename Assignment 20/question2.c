#include <stdio.h>
#include <string.h>

void swap(int *, int *);

int main(void) {
	
	char str1[100]="name";
	char str2[100]="others";
	
	printf("\nBefore swap str1= %s and str2=%s", str1, str2);
	
	swap(str1, str2);
	
	printf("\nBefore swap str1= %s and str2=%s", str1, str2);
	
	return 0;
}

void swap(int str1[], int str2[])
{
    char temp[100];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}
