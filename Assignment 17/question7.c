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

    char str[]="Hello123.";
    int alpha=0, special=0, digit=0;

    for(int i=0; str[i]; i++)
    {
        switch (str[i])
        {
        case 'A' ... 'Z':
                        alpha++;
                        break;
        case 'a' ... 'z':
                        alpha++;
                        break;
        case '0' ... '9' :
                        digit++;
                        break;
        
        default:
                        special++;
                        break;
        }
    }

    printf("Alphabet : %d", alpha);
    printf("\nDigit : %d", digit);
    printf("\nSpecial : %d", special);

    return 0;
}