#include<stdio.h>
#define N 3

int main(void)
{
    /* code */
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int m1[N][N], trans[N][N];

    //Input matrix
    for(int i=0; i<=N-1; i++)
    {
        for(int j=0; j<=N-1; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    //transpose
    for(int i=0; i<=N-1; i++)
    {
        for(int j=0; j<=N-1; j++)
        {
            trans[j][i]=m1[i][j];
        }
    }

    //print matrix
    for(int i=0; i<=N-1; i++)
    {
        for(int j=0; j<=N-1; j++)
        {
            printf("%d\t",trans[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}