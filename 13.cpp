#include <iostream> //This includes InputOutput Library
 
using namespace std;
 
int main()     //This is the main function
{ //Start of main body
    float a,b,c;   //Declaring float
    cout<<"Enter 1st value : ";  //Promts the user for 1st value
    cin>>a;                      //Takes user input and stores it in variable
    cout<<"Enter 2nd value : ";   //Promts the user for 1st value
    cin>>b;                          //Takes user input and stores it in variable
    cout<<"Enter 3rd value : ";       //Promts the user for 1st value
    cin>>c;                             //Takes user input and stores it in variable
    if((a >= b) && (a >= c)) {        // condition for getter and less than 
        cout<<"The largest number among "<<a<<","<<b<<" and "<<c<<" is "<<a;
    }else if ((b >= a) && (b >= c)){
        cout<<"The largest number among "<<a<<","<<b<<" and "<<c<<" is "<<b;
    }else {
        cout<<"The largest number among "<<a<<","<<b<<" and "<<c<<" is "<<c;
    }
 
    return 0;    //End of program
}       //End of main body
