#include <stdio.h>

int findSmallest(int [], int);

int main(void) {
	int arr[] = {10, 324, 45, 90, 9808};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	printf("Smallest : %d", findSmallest(arr, n));
	
	return 0;
}

int findSmallest(int a[], int n)
{
    int min=a[0];
    int i=0;
    
    while(i!=n)
    {
        if(a[i]<min)
            min=a[i];
            
        i++;
    }
    
    return min;
}

