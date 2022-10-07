#include <iostream>
#include <string.h>
using namespace std;

class mystring
{
    private:
        char str[100];
    public:
        mystring()
        {
            strcpy(str, "dummy");
        }
        mystring operator!();
        void setString(char *);
        char * getString(){return str;}
};

void mystring::setString(char *s)
{
    strcpy(str, s);
}

mystring mystring::operator!()
{
    for(int i=0; str[i]; i++)
    {
        if(str[i]>='a' && str[i] <= 'z')
        {
            str[i]-=32;
        }
        else if(str[i]>='A' && str[i] <= 'Z')
        {
            str[i]+=32;
        }
    }
    return *this;
}

int main()
{
    mystring s1;
    s1.setString("prashnAt");
    !s1;
    cout<<s1.getString();    
    return 0;
}