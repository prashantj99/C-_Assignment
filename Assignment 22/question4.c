#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str=NULL, ch;
    int index=0, length=1;
    str=(char *)malloc(sizeof(char));

    while(ch != '\n')
    {
        ch=getc(stdin);

        str=(char*)realloc(str, (++length)*sizeof(char));

        if(str == NULL)
        {
            printf("memory allocation failed");
            return 0;
        }

        str[index++]=ch;

    }

    str[index]='\0';

    printf("%s", str);

    free(str);
    
    return 0;
}