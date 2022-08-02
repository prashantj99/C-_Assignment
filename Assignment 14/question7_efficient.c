#include <stdio.h>

int main(void) {

    int n;
    
    scanf("%d",&n);
    
    int a[n];
    
    for(int i=0 ;i<n ;i++)
        scanf("%d",&a[i]);
    
    int f=a[0] ,s=a[1];
    
    for(int i=2 ; i<=n-1 ; i++)
    {
        if(f==s)
        {
            f>a[i] ? f=a[i] : (s=a[i]);
        }
        else if(f>a[i] && s<a[i])
        {
            s=a[i];
        }
        else if(f<a[i] && s>a[i])
        {
            f=a[i];
        }
        else if(f<a[i] && s<a[i])
        {
            f>s ? s=a[i] : (f=a[i]); 
        }
        
    }
        
    if(f!=s)
    {
        f>s ? printf("%d",s) : printf("%d",f);
    }
    else
    {
        printf("Not Found !!!");
    }
    //log

    printf("\n");
    printf("%d %d" ,f ,s);

	return 0;
}
