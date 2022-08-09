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

    char str[50];

    fgets(str,50,stdin);

    int i;

    for(i=0; str[i] ; i++);

    printf("Length : %d", i);

    return 0;
}