#include<stdio.h>
#include<string.h>

char *revstr(char *);

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
    char str[]="reverse";

    printf("%s", revstr(str));

    return 0;
}

char * revstr(char str[])
{
    char ch;
    for(int i=0 ,j=strlen(str)-1 ; i<j && i!=j ; i++, j--)
    {
        ch=str[i];
        str[i]=str[j];
        str[j]=ch;        
    }
    return str;
}