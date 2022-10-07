#include <iostream>
using namespace std;

class Matrix
{
    int m[3][3];

    public:

        Matrix()
        {
            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                {
                    m[i][j]=0;
                }
            }
            
        }

        Matrix operator-()
        {
            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                {
                    m[i][j]=-m[i][j];
                }
            }
        }

        void display();
        void input();
};

void Matrix::display()
{
    cout<<"Matrix : "<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<m[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}

void Matrix::input()
{
    cout<<"Enter Matrix of (3X3) : "<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>m[i][j];
        }
    }
}

int main()
{
    Matrix m;
    m.display();

    m.input();

    -m;
    m.display();

    return 0;
}