#include <stdio.h>
#include<limits.h>


void removeDuplicate(int[], int);

int main(void) {
	
	int n;
	
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i=0; i<n; i++)
	{
	    scanf("%d",&arr[i]);
	}
	
	removeDuplicate(arr, n);
	
	//print updated array
	for(int i=0; i<=n-1; i++)
	{
	    if(arr[i]!=INT_MIN)
	        printf("%d\t",arr[i]);
	}
	
	return 0;
}

void removeDuplicate(int arr[], int n)
{
    int j, temp;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]==INT_MIN)  continue;
            
        temp=arr[i];
        j=i+1;
        
        while(j<n)
        {
            if(arr[j]==INT_MIN){
                j++;
                continue;
            }
            
            if(arr[j]==temp)
            {
                arr[j]=INT_MIN;
            }
            
            j++;
        }
    }
    
}