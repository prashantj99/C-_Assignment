#include <iostream>

using namespace std;

class Matrix
{
    private:
        int arr[3][3];

    public:
        Matrix()
        {
            for(int i=0; i<3; i++)
                for(int j=0; j<3; j++)
                    arr[i][j]=0;
        }

        friend istream & operator>>(istream &is, Matrix &m);
        friend ostream & operator<<(ostream &os, Matrix m);
        Matrix operator+(Matrix);

};

//adding two matrix
Matrix Matrix::operator+(Matrix m)
{
    Matrix temp;

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            temp.arr[i][j]=arr[i][j]+m.arr[i][j];

    return temp;
}

istream & operator>>(istream &is, Matrix &m)
{
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            is>>m.arr[i][j];

    return is;
}

ostream & operator<<(ostream &os, Matrix m)
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            os<<m.arr[i][j]<<"  ";
        }
        cout<<endl;
    }   

    return os;
}

int main()
{
    Matrix m1, m2, m3;
    cout<<"Enter Matrix 1 (3x3) :"<<endl;
    cin>>m1;
    
    cout<<"Enter Matrix 2 (3x3) :"<<endl;
    cin>>m2;

    cout<<"First Matrix :"<<endl;
    cout<<m1<<endl;
    
    cout<<"Second Matrix :"<<endl;
    cout<<m2<<endl;

    m3=m1+m2;

    cout<<"Addition of First Matrix and Second Matrix :"<<endl;
    cout<<m3<<endl;
  
    return 0;
}