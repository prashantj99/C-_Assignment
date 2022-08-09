#include<stdio.h>
#include<string.h>

int main(void)
{
    /* 
       create an output and input file in the same folder
       for input output
    */
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    /* code */
    char src[]="Hello Lets copy it";//source
    char dst[strlen(src)];//destination
    int i;

    for(i=0; src[i]; i++)
    {
        dst[i]=src[i];
    }
    dst[i]='\0';
    
    printf("%s",dst);

    return 0;
}