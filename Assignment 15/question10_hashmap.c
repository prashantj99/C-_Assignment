#include<stdio.h>
#include<string.h>

int main(void)
{
    int arr[]={1, 2, 4, 5, 1, 4, 10, 2, 2};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    int freq[50]={0};
    
    for(int i=0; i<size; i++)
    {
        freq[arr[i]]++;
    }
    
    for(int i=0; i<50; i++)
    {
        if(freq[i] !=0)
            printf("\n%d : %d times", i, freq[i]);
    }
    
    return 0;
}