#include "../../std_lib_facilities.h"

int main()
{
    cout << "Input two numbers, separated by a space:\n";
    double val1, val2;
    cin >> val1;
    cin >> val2;

    double smaller, larger, sum, difference, product, ratio;

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
    ratio = val2 / val1;

    cout << "The smaller number is " << smaller << "\n"
         << "The larger number is " << larger << "\n"
         << "The sum of the numers is " << sum << "\n"
         << "The (absolute) difference between the numbers is " << difference << "\n"
         << "The product of the numbers is " << product << "\n"
         << "The ratio of the numbers is 1:" << ratio << "\n";

    return 0;
}