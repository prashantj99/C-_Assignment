#include <stdio.h>

void revarray(int [], int);

int main(void) {
	
	int n;
	
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
	
	revarray(arr, n);
	
	for(int i=0; i<n; i++)//print after  reversing array
        printf("%d\t",arr[i]);
	
	return 0;
}

void revarray(int a[], int n)
{
    int f=0, l=n-1;
    int temp;
    
    int i=0;
    
    while(f!=l && f<l)
    {
        temp=a[f];
        a[f]=a[l];
        a[l]=temp;
        
        f++;
        l--;
        
    }
}