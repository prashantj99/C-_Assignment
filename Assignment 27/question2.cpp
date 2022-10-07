#include <iostream>

using namespace std;

class Integer
{
    private:
        int i;
    public:
        void set(int x){i=x;}
        int get(){return i;}
        Integer operator++()
        {
            Integer t;
            t.i=i++;
            return t ;   
        }

        Integer operator++(int);

        Integer operator--()
        {
            Integer it;
            it.i=--i;
            return it;
        }

        Integer operator--(int)
        {
            Integer it;
            it.i=i--;
            return it;
        }

};

Integer Integer::operator++(int)
{
    Integer i2;
    i2.i=i;
    i++;
    return i2;
}

int main()
{
    Integer i1, i2, i3, it1, it2, it3;

    i1.set(2);
    i2.set(10);
    
    i3=i1++;
    cout<<"i3 = "<<i3.get()<<" i1 = "<<i1.get()<<endl;

    i3=++i2;
    cout<<"i3 = "<<i3.get()<<" i2 = "<<i2.get()<<endl;

    it1.set(5);
    it3=--it1;
    cout<<"i3 = "<<it3.get()<<" it1 = "<<it1.get();
    
    it2.set(8);
    it3=it2--;
    cout<<"i3 = "<<it3.get()<<" it2 = "<<it2.get();

    return 0;
}