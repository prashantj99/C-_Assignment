#include <stdio.h>

int main(void) {
    
    int a[10]={0};
    
    for(int i=0; i<10 ;i++)
        scanf("%d",&a[i]);
        
    int min=a[0];
    
    for(int i=1; i<10 ; i++)
    {
        if(a[i]<min)
            min=a[i];
    }
        
    printf("Min : %d",min);
    
    return 0;
}

