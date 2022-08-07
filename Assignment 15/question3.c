#include <stdio.h>

int *sort(int [], int);

int main(void) {
	int arr[] = {10, -20, 45, 90, 9808};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	int *a=sort(arr ,n);
	
	for(int i=0 ; i<=n-1 ; i++)
        printf("%d\t",a[i]);
	
	return 0;
}

int *sort(int a[], int n)
{
    int temp, flag;
    
    for(int i=0 ; i<=n-2 ; i++)
    {
        flag=0;
        for(int j=0; j<=n-2-i ; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                flag=1;
            }
        }
        if(!flag)
        {
            break;        }
    }
    return a;
}

