#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    int n, *ptr;

    printf("Enter memory size(in bytes) : ");
    scanf("%d", &n);

    if(malloc(n) == NULL)
    {
        printf("memory allocation failed!!!");
        return 0;
    }
    else
    {
        printf("memory allocation successfull!!!");
    }

    free(ptr);

    return 0;
}