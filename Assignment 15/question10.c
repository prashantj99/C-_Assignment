#include <stdio.h>
#include<limits.h>


void printFrequency(int[], int);

int main(void) {
	
	int n;
	
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i=0; i<n; i++)
	{
	    scanf("%d",&arr[i]);
	}
	
	printFrequency(arr, n);
	
	return 0;
}

void printFrequency(int arr[], int n)
{
    int j, temp, count;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]==INT_MIN)  continue;
            
        temp=arr[i];
        j=i+1;
        
        count=1;
        
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
        
        printf("\nElement %d ---> %d times", temp, count);
        
    }
    
    return count;
}