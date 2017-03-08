#include <iostream>  //This includes InputOutput Library

using namespace std ;

int main()  //This is the main function
{  //Start of main body
    string name ;  // string variable
    cout<<"What is your name? Please enter your name: \n" <<name ; // display question and variable
    cin >> name ; // take user input and store in it


    string birth ; // string variable
    cout<<"What is your year of birth? Please enter your year of birth: \n" <<birth ; // display question and variable
    cin >> birth ; // take user input and store in it


    string number ; // string variable
    cout<< "What is your mobile number? Please enter your mobile number: \n" <<number ; // display question and variable
    cin >> number ;  // take user input and store in it


    cout<<  name <<endl;  //output and print the variable
    cout << birth <<endl; //output and print the variable
    cout << number <<endl; //output and print the variable


    return 0 ;  //End of program
} //End of main body
