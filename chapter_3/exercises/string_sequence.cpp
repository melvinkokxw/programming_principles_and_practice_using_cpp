// This program sorts three strings in ascending order

#include "../../std_lib_facilities.h"

int main()
{
    cout << "Input three strings, separated by a space:\n";
    string val1, val2, val3;
    cin >> val1;
    cin >> val2;
    cin >> val3;

    string smallest = "", middle = "", largest = "";

    if (val1 > val2)
    {
        smallest = val2;
        largest = val1;
    }
    else
    {
        smallest = val1;
        largest = val2;
    }

    if (val3 > largest)
    {
        middle = largest;
        largest = val3;
    }
    else if (val3 < smallest)
    {
        middle = smallest;
        smallest = val3;
    }
    else
    {
        middle = val3;
    }

    cout << smallest << ", " << middle << ", " << largest << "\n";
}