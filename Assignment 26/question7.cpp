#include <iostream>
using namespace std;

class Box
{
    private:
        int length, breadth, height, vol;
    public:
        Box(int l, int b, int h){ length=l; breadth=b; height=h; vol=0;}
        void cal_volume(){ vol=length*breadth*height;}
        int getLength(){return length;}
        int getBreadth(){return breadth;}
        int getHeight(){return height;}
        int getVolume(){ return vol;}
};

int main()
{
    Box b1(2,3,4);
    b1.cal_volume();
    cout<<b1.getVolume();
    return 0;
}