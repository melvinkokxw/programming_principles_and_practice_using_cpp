#include "../../std_lib_facilities.h"

int main()
{
    int pennies, nickels, dimes, quarters, half_dollars, dollars;
    double value = 0;

    cout << "How many pennies?\n";
    cin >> pennies;
    cout << "How many nickels?\n";
    cin >> nickels;
    cout << "How many dimes?\n";
    cin >> dimes;
    cout << "How many quarters?\n";
    cin >> quarters;
    cout << "How many half-dollars?\n";
    cin >> half_dollars;
    cout << "How many dollar coins?\n";
    cin >> dollars;

    value = pennies + nickels * 5 + dimes * 10 + quarters * 25 + half_dollars * 50 + dollars * 100;
    value /= 100;

    if (pennies == 1)
    {
        cout << "You have 1 penny.\n";
    }
    else if (pennies > 1)
    {
        cout << "You have " << pennies << " pennies.\n";
    }

    if (nickels == 1)
    {
        cout << "You have 1 nickel.\n";
    }
    else if (nickels > 1)
    {
        cout << "You have " << nickels << " nickels.\n";
    }

    if (dimes == 1)
    {
        cout << "You have 1 dime.\n";
    }
    else if (dimes > 1)
    {
        cout << "You have " << dimes << " dimes.\n";
    }

    if (quarters == 1)
    {
        cout << "You have 1 quarter.\n";
    }
    else if (pennies > 1)
    {
        cout << "You have " << quarters << " quarters.\n";
    }

    if (half_dollars == 1)
    {
        cout << "You have 1 half dollar.\n";
    }
    else if (half_dollars > 1)
    {
        cout << "You have " << half_dollars << " half dollars.\n";
    }

    if (dollars == 1)
    {
        cout << "You have 1 dollar.\n";
    }
    else if (dollars > 1)
    {
        cout << "You have " << dollars << " dollars.\n";
    }

    cout << "The value of all your coins is $" << value << ".\n";

    return 0;
}