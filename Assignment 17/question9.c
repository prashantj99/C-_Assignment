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

    char str[]="prashant";
    int size=strlen(str);

    int i, j, flag;
    char ch, temp;

    for(i=0; i<=size-1; i++)
    {
        flag=0;
        for(j=0; j<=size-2-i; j++)
        {
            if(str[j]>str[j+1])
            {
                ch=str[j];
                str[j]=str[j+1];
                str[j+1]=ch;
                flag=1;
            }
        }   
        if(!flag)
        {
            break;
        }
    }

    printf("%s",str);

    return 0;
}