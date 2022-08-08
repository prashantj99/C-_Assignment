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

    // print lower triangular
    for(int i=0; i<=N-1; i++)
    {    
        for(int j=0; j<=N-1; j++)
        {    
            if(j<=i)
                printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}