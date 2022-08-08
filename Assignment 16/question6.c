#include<stdio.h>
#define N 3

int main(void)
{
    /* code */
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int m1[N][N], trans[N][N], sum=0;

    //Input matrix
    for(int i=0; i<=N-1; i++)
    {
        for(int j=0; j<=N-1; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    //summation of row
    for(int i=0; i<=N-1; i++)
    {
        sum=0;
        for(int j=0; j<=N-1; j++)
        {
            sum+=m1[i][j];
        }

        printf("%d\t",sum);
    }

    printf("\n");
    //summation of col
    for(int i=0; i<=N-1; i++)
    {
        sum=0;
        for(int j=0; j<=N-1; j++)
        {
            sum+=m1[j][i];
        }

        printf("%d\t",sum);
    }
    
    return 0;
}