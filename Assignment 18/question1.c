#include<stdio.h>

int stringLen(char *);

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
    char str[]="MysirG";

    printf("%d", stringLen(str));

    return 0;
}

int stringLen(char str[])
{
    int i;

    for(i=0; str[i]; i++);
    
    return i;
}