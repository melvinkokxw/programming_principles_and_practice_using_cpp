// This program sorts three integers in ascending order

#include "../../std_lib_facilities.h"

int main()
{
    cout << "Input three integers, separated by a space:\n";
    int val1, val2, val3;
    cin >> val1;
    cin >> val2;
    cin >> val3;

    int smallest = 0, middle = 0, largest = 0;

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