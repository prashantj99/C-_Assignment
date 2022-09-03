#include <stdio.h>

int main(void) {
    
    int arr[]={1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int sum=0;
    
    for(int i=0; i<size; i++)
    {
        sum+=*(arr + i);
    }
    
    printf("sum : %d", sum);
    
    
    
	return 0;
}

