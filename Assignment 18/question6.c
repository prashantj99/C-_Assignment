#include<stdio.h>
#include<string.h>

int isAlphaNum(char *);

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
    char str[]="$1HelloMysirG";

    if(isAlphaNum(str))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}

int isAlphaNum(char str[])
{
    int aflag=0, nflag=0, len=strlen(str);
    
    for(int i=0; i<=len-1; i++)
    {
        switch (str[i])
        {
        case 'A' ... 'Z': aflag=1;
               break;
        case 'a' ... 'z': aflag=1;
                break;
        case  '0' ... '9' : nflag=1;            
                break;
        }

        if(aflag && nflag)
            return 1;
    }

    return 0;
}