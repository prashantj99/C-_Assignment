#include <iostream>
using namespace std;

class Fraction
{
    private:
        long int nr, dr;
    public:

        Fraction(){nr=0; dr=0;}
        Fraction(long int x, long int y){nr=x; dr=y;}

        void set(long int x, long int y){nr=x; dr=y;}
        int getNr(){return nr;}
        int getDr(){return dr;}

        friend istream & operator>>(istream &is, Fraction &f);
        friend ostream & operator<<(ostream &os, Fraction f);

        //uniary operator 
        Fraction operator++()
        {
            ++nr;
            ++dr;

            return *this;
        }
        
        Fraction operator++(int)
        {
            Fraction temp=*this;

            nr++;
            dr++;

            return temp;
        }


};

istream & operator>>(istream &is, Fraction &f)
{
    cout<<"\nNumerator : ";
    is>>f.nr;
    
    cout<<"\nDenominator : ";
    is>>f.dr;

    return is;
}

ostream & operator<<(ostream &os, Fraction f)
{
    os<<f.nr<<"/"<<f.dr<<endl;
}

int main()
{
    Fraction f1, f2;

    cout<<"\nEnter First Fraction : ";
    cin>>f1;
    cout<<"First Fraction : "<<f1<<endl;

    ++f1;
    cout<<"++f1 : "<<f1;
    
    f1++;
    cout<<"f1++ : "<<f1;

    f2=++f1;
    cout<<"f2=++f1"<<endl;
    cout<<"f1 : "<<f1;
    cout<<"f2 : "<<f2;
    
    f2=f1++;
    cout<<"f2=f1++"<<endl;
    cout<<"f1 : "<<f1;
    cout<<"f2 : "<<f2;

    return 0;
}


