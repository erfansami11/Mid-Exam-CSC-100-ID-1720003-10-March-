#include <iostream>     //This includes input, output library

using namespace std;

int main ()             //This is the main function
{                       //Start of main body
    int minute, hours;
    cout<< "Please input hours: "<<endl;      //Prompts the user for number of hours
    cout<< "\n";
    cin>> hours;                                             // Takes user input and store it in variable

    cout<< "Please input minutes: "<<endl;    //Prompts the user for number of minutes
    cout<< "\n";
    cin>> minute;                                             // Takes user input and stores it in variables

    double t_minute;                                      // Declares real values with label: total min

    t_minute = (hours) * 60 + minute;

   cout<< "Total minutes:\n " <<t_minute<< "\n";  //Displays the result to the user


return 0;               //End of program
}                       //End of main body
