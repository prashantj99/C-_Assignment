#include <iostream>
using namespace std;

class Cube
{
    private:
        int s, vol;
    public:
        Cube(int x){s=x; vol=x*x*x;}
        Cube(){s=0; vol=0;}

        void setSide(int x){ s=x;}
        int getVol(){return vol;}
        void cal_volume(){ vol=s*s*s;}

};


int main()
{
    Cube c1(2), c2;

    cout<<c1.getVol()<<endl;

    c2.setSide(4);
    c2.cal_volume();

    cout<<c2.getVol()<<endl;


    return 0;
}