#include <iostream>
using namespace std;


bool isPalindrome(int x){
    bool ans=true;
    
    if(x < 0 ) return false;
    
    int rem;
    unsigned long int rev=0;
    int temp=x;
    
    while(temp)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
    }

    return (rev == x) ? true : false; 
}

int main()
{
    int a=-121, b=121, c=123, d=1234567899;
    
    cout<<isPalindrome(d)<<endl;
    cout<<isPalindrome(a)<<endl;
    cout<<isPalindrome(b)<<endl;
    cout<<isPalindrome(c)<<endl;
    return 0;
}