#include <iostream>
using namespace std;

int main()
{
    int s, range;

    cout << "Enter a integer number: ";
    cin >> s;

    cout << "Please Enter range: ";
    cin >> range;

    for (int i = 1; i <= range; ++i)
        {
        cout << s << " * " << i << " = " << s * i << endl;
    }

    return 0;
}
