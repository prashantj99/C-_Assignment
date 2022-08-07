#include <stdio.h>
#include<limits.h>


int countDuplicate(int[], int);

int main(void) {
	
	int n;
	
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i=0; i<n; i++)
	{
	    scanf("%d",&arr[i]);
	}
	
	printf("%d", countDuplicate(arr, n));
	
	return 0;
}

int countDuplicate(int arr[], int n)
{
    int j, temp, count=0;
    
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
                count++;
                arr[j]=INT_MIN;
            }
            
            j++;
        }
    }
    
    return count;
}