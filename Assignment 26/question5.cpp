#include <iostream>
using namespace std;

class Date
{
    private:
        int day, month, year;
    public:
        Date(int d, int m, int y){day=d; month=m; year=y;}
        void showDate(){cout<<day<<"/"<<month<<"/"<<year<<endl;}

};

int main()
{
    Date d(13, 9, 2022);
    d.showDate();
    return 0;
}