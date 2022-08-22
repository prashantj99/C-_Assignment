#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[4][100] = {"hello@gmail.com", "java@gmail.com", "ioprogrammers@yahoo.com", "dec.ac.gmail.com"};
    
    int flag;
    int n= sizeof(str)/sizeof(str[0]);


    for(int i=0; i<n; i++)
    {
        flag=0;

        for(int j=0; str[i][j]; j++)
        {
            if(str[i][j] == '@')
            {
                flag=1;
                break;
            }
        }

        if(!flag)
        {
            printf("\n%s", str[i]);
            printf("\nInvalid Email Address!!!");

        }

    }

    return 0;
}