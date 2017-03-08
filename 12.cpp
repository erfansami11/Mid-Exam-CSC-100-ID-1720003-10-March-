#include <iostream>     //This includes input, output library

using namespace std;

int main ()             //This is the main function
{                       //Start of main body
    cout<< "Please enter your age: \n";       //Display for user input

    int age;                                      // Declares integer variable with label
    cin>> age;                                    // Take user input a
    cout<< "\n";

    if (age < 18)                                   // Output if age is less than 18
    {
        cout<< "Sorry u r  not eligible for vote.\n";
        cout<< "\n";
    }
    else                                            // Output if age is greater than 18
    {
        cout<< "Congratulations! You are eligible for casting your vote...\n";
        cout<<"\n" ;

    }

return 0;               //End of program
}                       //End of main body
