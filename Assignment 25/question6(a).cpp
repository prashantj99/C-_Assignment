#include <iostream>
using namespace std;

class Square
{
    private:
        int num;
    public:
        int setNum(int x){num=x;}
        int square();
};

int Square::square()
{
    return num*num;
}


int main()
{
    Square sq;
    sq.setNum(5);

    cout<<sq.square();

    return 0;
}