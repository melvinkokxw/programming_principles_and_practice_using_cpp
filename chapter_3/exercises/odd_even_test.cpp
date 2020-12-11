// This program tests is a given integer is an odd or even number

#include "../../std_lib_facilities.h"

int main()
{
    cout << "Input an integer (followed by enter):\n";
    int value;
    cin >> value;

    string result = "even";

    if (value % 2) // same as `if (value % 2 == 1)` since 1 also represents True. may not be type safe??
    {
        result = "odd";
    }

    cout << "The integer " << value << " is an " << result << " number.\n";

    return 0;
}