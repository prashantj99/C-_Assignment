#include <iostream>
using namespace std;

class Time 
{
    private: 
        int hour, min, sec;
    
    public:
        void setH(int h) {hour = h;}
        void setM(int m) {min = m;}
        void setS(int s) {sec = s;}     
        void display() {cout<<hour<<" hr "<<min<<" min "<<sec<<" sec ";};
};

int main()
{
    Time t;

    t.setH(2);
    t.setM(23);
    t.setS(53);

    t.display();

    return 0;
}