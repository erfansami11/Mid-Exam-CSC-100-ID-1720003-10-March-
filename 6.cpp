#include <iostream>     //This includes input, output library

using namespace std;

int main ()
{                       //Start of main body//This is the main function

    int numerator, denominator;    // Declares integer variable with label : numerator, denominator

    cout<< "Please enter your factor's numerator :\n"<<endl;      //Prompt this user for numerator

    cin>> numerator;                              // Takes user input and stores it in variable

    cout<< "\n";
    cout<< "Please enter your factor's denominator:\n "<<endl;  //Prompt this user for denominator

    cin>> denominator;                           // Takes user input and store it in variable
    cout<< "\n";

    int quotient, remainder;                      // Declares integer variable with label

    quotient = numerator / denominator;          // division formula
    remainder = numerator % denominator;         // remainder formula

    cout<< "The quotient is: \n" <<quotient<< "."<<endl;      // Displays the output
    cout<< "The remainder is: \n" <<remainder<< "."<<endl;    // Displays the output


return 0;               //End of program
}                       //End of main body
