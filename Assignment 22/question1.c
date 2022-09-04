#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *str=NULL, c;
    int index=0, length=1;
    
    str=(char*)malloc(sizeof(char));

    while(c !='\n')
    {
        c=getc(stdin);
        length++;
        str=(char*)realloc(str, length*sizeof(char));
        str[index]=c;
        index++;
    }
    str[index]='\0';

    printf("%s", str);

    free(str);

    return 0;
}