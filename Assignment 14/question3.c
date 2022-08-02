#include <stdio.h>

int main(void) {
    
    int arr[10]={0};
    int even=0;
    int odd=0;
    
    for(int i=0; i<10 ;i++)
        scanf("%d",&arr[i]);
        
    for(int i=0; i<10 ; i++)
    {
        if(arr[i]%2)
            odd+=arr[i];
        else
            even+=arr[i];
    }
        
    printf("Odd Sum : %d\n",odd);
    printf("Even Sum : %d",even);
    
    return 0;
}

