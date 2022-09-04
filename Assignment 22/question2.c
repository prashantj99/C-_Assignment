#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("\nEnter number of data values to be entered :");
    scanf("%d", &n);

    int *arr=(int *)calloc(n, sizeof(int));

    printf("\nEnter data value : ");    
    for(int i=0; i<n; i++)
    {
        scanf("%d", (arr + i));
    }

    int sum=0;
    printf("\n");
    for(int i=0; i<n; i++)
    {
        sum+=*(arr + i);
    }

    free(arr);

    printf("Average : %.2f", (float)sum/n);

    return 0;
}