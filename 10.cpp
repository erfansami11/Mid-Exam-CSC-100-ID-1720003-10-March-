#include <iostream>     //This includes input, output library

using namespace std;

int main ()             //This is the main function
{                       //Start of main body
    string f_name, l_name;

    cout<< "Please enter your First Name: "<<endl;       //Prompt the user for first name
    cout<< "\n";
    cin>> f_name;                                     //Takes user input

    cout<< "Please enter your Last Name: "<<endl;         // Prompt the user for last name
    cout<< "\n";
    cin>> l_name;                                      // Takes user input

    int b_day;
    cout<< "Please enter your birth date: "<<endl;   // Prompt the user for birth date
    cout<< "\n";
    cin>> b_day;                                        //Takes user input
    cout<< "\n" <<f_name<< "\n" <<l_name<< "\n" <<b_day<< ".";           //Displays the output



return 0;               //End of program
}                       //End of main body

