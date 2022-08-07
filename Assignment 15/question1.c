#include <stdio.h>

int findGreatest(int [], int);

int main(void) {
	int arr[] = {10, 324, 45, 90, 9808};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	printf("Greatest : %d", findGreatest(arr, n));
	
	return 0;
}

int findGreatest(int a[], int n)
{
    int max=a[0];
    int i=0;
    
    while(i!=n)
    {
        if(a[i]>max)
            max=a[i];
            
        i++;
    }
    
    return max;
}

