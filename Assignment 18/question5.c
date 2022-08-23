#include<stdio.h>
#include<string.h>

char *toLowercase(char *);

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
    char str[]="Change To UPPercase123";
    
    printf("%s",toLowercase(str));

    return 0;
}

char *toLowercase(char str[])
{
    int len=strlen(str);

    for(int i=0; i<=len-1; i++)
    {
        if(str[i]!=' ' && str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
    }

    return str;
}