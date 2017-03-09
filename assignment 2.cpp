#include <iostream>
using namespace std;
int main()
{

double pi , radius , area ,circ ;

pi = 3.14159;

cout<< " Input the radius:"<<endl;

cin>> radius ;

area = pi*radius*radius;
circ = 2*pi*radius ;
cout<< "Area of circle is "<<area<<"and the circ is"<<circ<<endl ;

return 0;

}
