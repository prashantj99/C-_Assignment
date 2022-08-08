#include<stdio.h>

int main(void)
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int m1[3][3], m2[3][3], sum[3][3], n=3;

    //input matrix 1
    for(int i=0; i<=n-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    //input matrix 2
    for(int i=0; i<=n-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }

    for(int i=0; i<=n-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            sum[i][j]=m1[i][j]+m2[i][j];
        }
    }

    //print sum 
    for(int i=0; i<=n-1; i++)
    {
        for(int j=0; j<=n-1; j++)
        {
            printf("%d\t",sum[i][j]);
        }

        printf("\n");

    }

    return 0;
}