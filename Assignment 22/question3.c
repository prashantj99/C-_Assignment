#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *ch;
    int sum=0;
    do
    {
        ch=(int *)malloc(sizeof(int));

        if(ch == NULL)
        {
            printf("Memory allocation failed");
            return 0;
        }

        scanf("%d", ch);

        if(!*ch)
        {
            free(ch);
            break;
        }

        sum+=(*ch);
        free(ch);
    } while (1);

    printf("sum : %d", sum);

    return 0;
}