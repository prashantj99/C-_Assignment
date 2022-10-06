#include <iostream>
using namespace std;

class Counter
{
    private:
        static int count;
    public:
        Counter()
        {
            count++;
        }

        static int getCount(){return count;}
        
};

int Counter::count=0; //defining static var count

int main()
{
    cout<<"Number of Object : "<<Counter::getCount()<<endl;
    Counter c1,c2, c3;
    cout<<"Number of Object : "<<Counter::getCount();
    return 0;
}