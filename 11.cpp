#include <iostream>     //This includes input, output library

using namespace std;

int main ()             //This is the main function
{                       //Start of main body
    int num1,num2;                                // Declares integer variable

    cout<< "Please enter a number: "<<endl;       //Prompt the user for number

    cin>> num1;                              // Takes user input and stores it in variable

    cout<< "\n";

    cout<< "Please enter a number again: "<<endl;   //Prompt the user for second number

    cin>> num2;                                   // Takes user input

    cout<< "\n";

    if (num1==num2)                              // this statement will execute if num1 and num2 is equal
    {
        cout<< "\n" <<num1<< " is equal to " <<num2<< "\n.";
        cout<< "\n";
    }
    else                                           //this statement will execute if num1 and num2 is not equal
    {
        cout<< "" <<num1<< " is not equal to " <<num2<< "\n.";

    }
return 0;               //End of program
}                       //End of main body
