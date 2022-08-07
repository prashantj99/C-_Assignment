#include <stdio.h>

void merge(int [], int [], int [], int);

int main(void) {
    
    int n;
    
    scanf("%d",&n);
    
    int a[n], b[n];
    
    //input array
    for(int i=0; i<=n-1; i++)
    {
        scanf("%d",&a[i]);
    }
    
    //input array
    for(int i=0; i<=n-1; i++)
    {
        scanf("%d",&b[i]);
    }
    
    int arr[2*n];
    
    merge(a, b, arr, n);
    
    for(int i=0; i<=2*n-1; i++)
    {
        printf("%d\t",arr[i]);
    }
    	
	return 0;
}

void merge(int a[], int b[], int arr[], int n)
{
    int k=0, j=0, i=0;
    
    while(i<n && j<n)
    {
        if(a[i]>=b[j])
        {
            arr[k]=a[i];
            i++;
        }
        else if(a[i]<b[j])
        {
            arr[k]=b[j];
            j++;
        }
        
        k++;
    }
    
    for(; i<n ; i++)
    {
        arr[k++]=a[i];
    }
    
    for(; j<n ; j++)
    {
        arr[k++]=b[j];
    }
    
}