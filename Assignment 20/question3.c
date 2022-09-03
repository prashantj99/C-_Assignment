#include <stdio.h>
#include <string.h>

void sort(int *, int);

int main(void) {
	int arr[]={6, 2, 4, 8, 1, 19, -12};
	
	int size= sizeof(arr)/sizeof(arr[0]);
	
	sort(arr, size);
	
	for(int i=0; i<size; i++)
	{
	    printf("%d\t", arr[i]);
	}
	
	return 0;
}

void sort(int *ptr, int n)
{
    int temp;
    int flag=0;
    
    for(int i=0; i<n; i++)
    {
        flag=0;
        
        for(int j=0; j<n-i ; j++)
        {
            if(ptr[j] > ptr[j+1])
            {
                temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
                flag=1;
            }
        }
        
        if(!flag)
        {
            break;
        }
    }
    
}

