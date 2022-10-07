#include <iostream>
#include <string.h>

using namespace std;

class CString
{
    private:
        char s[1000];
    public:
        CString(){ strcpy(s, ""); }
        void setString(char *str){ strcpy(s, str);}
        char * getString(){ return s;}

        CString operator+(CString str1)
        {
            CString str2;
            strcpy(str2.s, s);
            strcat(str2.s, str1.s);
            return str2;
        }     

        friend int operator==(CString, CString);//can be instance member function 

        void displayString(){ cout<<s<<endl;}

};

int operator==(CString str1, CString str2)
{
    if(strcmp(str1.s, str2.s) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    CString str1, str2, str3;

    str1.setString("Radhe");
    str2.setString("Radhe");

    str1.displayString();
    str2.displayString();

    str3=str1+str2;

    str3.displayString();

    if(str1==str2)
    {
        cout<<"Strings are equal"<<endl;
    }
    else
    {
        cout<<"Strings are not equal"<<endl;
    }

    return 0;

}