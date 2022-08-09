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
    char str[]="hello lets change it into uppercase";

    // printf("%s",strupr(str));
    for(int i=0; str[i]; i++)
    {
        if(str[i]!=' ')
            str[i]-=32;
    }

    printf("%s",str);

    return 0;
}