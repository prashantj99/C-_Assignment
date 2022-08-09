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
    char str[50];

    fgets(str, 50, stdin);

    int s=0, l=strlen(str)-1;
    char ch;

    while(s<l && s!=l)
    {
        ch=str[s];
        str[s]=str[l];
        str[l]=ch;
        l--;
        s++;
    }

    printf("%s", str);

    return 0;
}