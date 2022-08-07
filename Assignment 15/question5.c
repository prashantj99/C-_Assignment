#include <stdio.h>

int firstAD(int [], int);

int main(void) {
	
	int n;
	
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
	
	printf("First Adjcent Duplicate : %d", firstAD(arr, n));
	
	return 0;
}

int firstAD(int a[], int n)
{
    int adj_element=-1;//-1 not found
    
    for(int i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1])
        {
            adj_element=a[i];
            break;
        }
    }
    
    return adj_element;
    
}

