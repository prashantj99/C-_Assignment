#include <stdio.h>

void rotate(int [], int, int, int);

int main(void) {
	int d=1, n, pos;
	
	scanf("%d %d %d", &n, &d, &pos);
	
	int arr[n];
	
	for(int i=0; i<n; i++)
	    scanf("%d",&arr[i]);
	
	rotate(arr, n, d, pos);//array, size, direction, shift by
	
	for(int i=0; i<n; i++)
	    printf("%d\t",arr[i]);
	
	return 0;
}

void rotate(int a[], int n, int d, int pos)
{
    int temp, j;
    if(d)
    {
        //left shift --1
        for(int i=0; i<pos; i++)
        {
            temp=a[0];
            
            for(j=1; j<n; j++)
            {
                a[j-1]=a[j];
            }
            
            a[j-1]=temp;
            
        }
    }
    else
    {
        //right shift --0
        
        for(int i=0; i<pos; i++)
        {
            temp=a[n-1];
            
            for(j=n-1; j>=1; j--)
            {
                a[j]=a[j-1];
            }
            
            a[j]=temp;
            
        }
    }
}