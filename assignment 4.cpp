#include<iostream>
using namespace std ;
int main ()
{
    double m ;
    double f;

    m =1 ;
    f = 3.28085 ;

    cout << "Enter ur value in meters:";
    cin >> m ;
    f=3.28085*m ;
    cout << "COnverting ur value to feet"<<f<<endl;
    return 0 ;
}
