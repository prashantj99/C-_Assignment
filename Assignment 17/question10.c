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
    char str[]="allahabad and missisippi";
    int len=strlen(str);
    int count;
    char ch;

    for(int i=0; i<=len-1; i++)
    {
        if(str[i]=='$')
        {
            continue;
        }

        ch=str[i];
        int j=i+1;
        count=0;

        while(j<=len-1)
        {
            if(str[j]!='$')
            {
                if(str[j]==ch)
                {
                    count++;
                    str[j]='$';
                }
            }
            j++;
        }
        printf("\n%c comes : %d times", ch, count+1);
    }

    return 0;
}