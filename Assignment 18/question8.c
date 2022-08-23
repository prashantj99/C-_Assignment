#include<stdio.h>

int countWord(char *);

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
    char str[]="lets count words in it";

    printf("%d", countWord(str));

    return 0;
}

int countWord(char str[])
{
    int count=1;
    
    for(int i=0; str[i]; i++)
    {
        if(str[i] == ' ')
            count++;
    }

    return count;
}
