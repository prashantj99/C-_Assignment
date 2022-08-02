#include <stdio.h>

int main(void) {

    int a[10]={0};
    int temp ,flag;
    
    for(int i=0 ;i<10 ;i++)
        scanf("%d",&a[i]);
        
    for(int i=0; i<=8 ; i++)
    {
        flag=0;
        for(int j=0; j<=8-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                
                flag=1;
            }
        }
        if(!flag)
        {
            break;
        }
    }
	
	for(int i=0 ;i<10 ;i++)
        printf("%d\t",a[i]);
        
	return 0;
}

