#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[5][100]={
        "abcdcba",
        "palindrome",
        "arora",
        "apollo",
        "hsrtrsh"
    };

    int n=sizeof(str)/sizeof(str[0]);

    for(int i=0; i<n; i++)
    {
        int s=0, l=strlen(str[i])-1;

        while(s<l && s!=l)
        {
            if(str[i][s++]!=str[i][l--])
            {
                printf("\n%s : Not a Plaindrome", str[i]);
                break;
            }
        }

    }
    return 0;
}