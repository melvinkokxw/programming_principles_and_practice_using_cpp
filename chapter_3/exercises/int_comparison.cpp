#include "../../std_lib_facilities.h"

int main()
{
    cout << "Input two integers, separated by a space:\n";
    int val1, val2;
    cin >> val1;
    cin >> val2;

    int smaller = 0, larger = 0, sum = 0, difference = 0, product = 0;
    double ratio = 0;

    if (val1 > val2)
    {
        smaller = val2;
        larger = val1;
        difference = val1 - val2;
    }
    else
    {
        smaller = val1;
        larger = val2;
        difference = val2 - val1;
    }

    sum = val1 + val2;
    product = val1 * val2;
    ratio = val2 / double(val1);

    cout << "The smaller integer is " << smaller << "\n"
         << "The larger integer is " << larger << "\n"
         << "The sum of the integers is " << sum << "\n"
         << "The (absolute) difference between the integers is " << difference << "\n"
         << "The product of the integers is " << product << "\n"
         << "The ratio of the integers is 1:" << ratio << "\n";

    return 0;
}