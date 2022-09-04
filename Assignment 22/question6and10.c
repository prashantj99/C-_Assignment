#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr=NULL, n;

    printf("Enter number of element to be inputted : ");
    scanf("%d", &n);

    ptr=(int *)malloc(n*sizeof(int));
    if(ptr == NULL)
    {
        printf("\nMemory allocation failed !!!");
        return 0;
    }

    printf("\nEnter element : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", (ptr+i));
    }

    int max=*(ptr);
    int min=*(ptr);
    for(int i=0; i<n; i++)
    {
        if(*(ptr+i) < min)
        {
            min=*(ptr+i);
        }

        if(*(ptr+i) > max)
        {
            max=*(ptr+i);
        }
    }

    free(ptr);

    printf("min : %d", min);
    printf("\nmax : %d", max);

    return 0;
}