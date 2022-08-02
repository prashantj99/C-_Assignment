#include <stdio.h>

int main(void) {
    
    int arr[10]={0};
    int sum=0;
    
    for(int i=0; i<10 ;i++)
        scanf("%d",&arr[i]);
        
    for(int i=0; i<10 ; i++)
        sum+=arr[i];
        
    printf("Avg : %.2f",sum/10.0);
    
    return 0;
}

