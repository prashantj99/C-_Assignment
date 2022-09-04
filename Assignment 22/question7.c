#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ptr=NULL;

    ptr=(int*)malloc(5*sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory allocation failed!!!");
        return 0;
    }

    ptr=NULL;

    return 0;
}