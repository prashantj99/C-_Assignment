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
    char str[]="Hello Let's check vowels";

    int count=0;

    for(int i=0; str[i]; i++)
    {
        switch (str[i])
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
                count++;
            break;
        
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
                count++;
            break;
        
        default:
            break;
        }
    }

    printf("vowels count : %d",count);

    return 0;
}