#include<stdio.h>
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

    int count=0;

    //count non-zero element
    for(int i=0; i<=N-1; i++)
        for(int j=0; j<=N-1; j++)
            if(a[i][j]!=0)
                count++;
    
    (N*N-count)> count ? printf("Yes") : printf("No");

    return 0;
}