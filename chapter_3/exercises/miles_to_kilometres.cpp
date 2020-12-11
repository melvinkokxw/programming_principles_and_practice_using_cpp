#include "../../std_lib_facilities.h"

int main()
{
    cout << "Input distance in miles (followed by enter):\n";
    double miles;
    cin >> miles;
    cout << "Distance in kilometres: " << miles*1.609 << "\n";
    return 0;
}