#include <iostream>
using namespace std;

class LargestNumber
{
    private:
        int a, b, c;
    public:
        void setAbc(int x, int y, int z){a=x; b=y; c=z;}
        int getLargest();
};

int LargestNumber::getLargest()
{
    int max=a;
    if(b> max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }

    return max;
}

int main()
{
    LargestNumber l1;
    l1.setAbc(3,2,5);

    cout<<l1.getLargest();

    return 0;
}


