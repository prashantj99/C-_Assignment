#include<stdio.h>
#include<string.h>

int isPalindrome(char *);

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
    char str[]="abcba";
    
    if(isPalindrome(str))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}

int isPalindrome(char str[])
{
    int flag=1;

    for(int s=0, l=strlen(str)-1; s!=l && s<l ; s++, l--)
    {
        if(str[s]!=str[l])
        {
            flag=0;
            break;
        }
    }

    return flag;
}