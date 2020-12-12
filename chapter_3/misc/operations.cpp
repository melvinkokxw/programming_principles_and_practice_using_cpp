// simple program to exercise operators

#include "../../std_lib_facilities.h"

int main()
{
    cout << "Please enter a integer value: ";
    int n;
    cin >> n;
    double double_n = double(n);
    cout << "n == " << n
         << "\nn+1 == " << n + 1
         << "\nthree times n == " << n * 3
         << "\ntwice n == " << n + n
         << "\nn squared == " << n * n
         << "\nhalf of n == " << n / 2
         << "\nsquare root of n == " << sqrt(double_n) // alternative: use double(n) without assigning to variable
         << '\n';
}