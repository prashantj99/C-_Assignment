#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr=NULL;

    ptr=(int *)malloc(sizeof(int));

    *ptr=10;
    
    if(ptr == NULL)
    {
        return 0;
    }

    free(ptr);

    printf("%d",*ptr);

    return 0;
}