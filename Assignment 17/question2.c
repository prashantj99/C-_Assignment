#include<stdio.h>

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
    char str[]="Delhi to Mumbai";
    char ch='i';
    int count=0;

    for(int i=0; str[i]; i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }
    
    printf("Occurance of \'%c\' in \"%s\" is %d times", ch, str, count);

    return 0;
}