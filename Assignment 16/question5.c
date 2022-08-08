#include<stdio.h>
#define N 3

int main(void)
{
    /* code */
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int m1[N][N], sum=0;

    //Input matrix
    for(int i=0; i<=N-1; i++)
    {
        for(int j=0; j<=N-1; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    //summation left  diagonal of matrix
    for(int i=0; i<=N-1; i++)
    {
        sum+=m1[i][N-(i+1)];
    }

    printf("%d\t", sum);
    
    return 0;
}