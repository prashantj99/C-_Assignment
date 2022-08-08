#include<stdio.h>
#define N 3


int main(void)
{
    /* code */
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int a[N][N], b[N][N], mul[N][N], sum=0;

    for(int i=0; i<=N-1; i++)
    {
        for(int j=0; j<=N-1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    for(int i=0; i<=N-1; i++)
    {
        for(int j=0; j<=N-1; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(int i=0; i<=N-1; i++)
    {
        for(int j=0; j<=N-1; j++)
        {
            sum=0;
            for(int k=0; k<=N-1; k++)
            {
                sum+=a[i][k]*b[k][j];
            }

            mul[i][j]=sum;

        }
    }

    for(int i=0; i<=N-1; i++)
    {
        for(int j=0; j<=N-1; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
