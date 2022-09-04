#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr=NULL, n;

    printf("Enter numbers to be inputed : ");
    scanf("%d", &n);

    ptr=(int *)malloc(n*sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory allocation failed !!!");
        return 0;
    }

    printf("\nEnter element : ");
    for(int i=0; i<n; i++)    
    {
        scanf("%d", (ptr+i));
    }
    int sum=0;
    for(int i=0; i<n; i++)    
    {
        sum+=ptr[i];
    }

    free(ptr);

    printf("sum : %d", sum);

    return 0;
}