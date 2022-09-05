#include <iostream>
using namespace std;

class CountCall
{
    private:
        static int count;

    public:
        static int getCount(){ return count;};
        void function();    
};

int CountCall:: count=0;

void CountCall::function()
{
    count++;
}

int main()
{
    CountCall c;
    
    for(int i=0;i<10; i++)
    {
        c.function();        
    }

    cout<<CountCall::getCount();

    return 0;
}