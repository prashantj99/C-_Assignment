#include<stdio.h>
#include<limits.h>

#define N 3

int main(void)
{
    /* code */
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a[N][N];

    for(int i=0; i<=N-1; i++)
    {
        for(int j=0; j<=N-1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    
    int max=INT_MIN;
    int count=0, row;

    for(int i=0; i<=N-1; i++)
    {    
        count=0;
        for(int j=0; j<=N-1; j++)
        {    
           if(a[i][j]==1)
                count++; 
        }

        if(count>max)
        {
            max=count;
            row=i+1;
        }
        
    }
    
    printf("%d\t",row);

    return 0;
}