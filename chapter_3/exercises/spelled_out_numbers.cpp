// This program converts a spelled out number into digits. 
// Probably not the best way to do it...

#include "../../std_lib_facilities.h"

int main()
{
    cout << "Enter a number, e.g. zero or 2 (followed by enter):\n";
    string value;
    cin >> value;

    string result = "";
    if (value == "zero" || value == "0")
    {
        result = "0";
    }
    else if(value == "one" || value == "1")
    {
        result = "1";
    }
    else if(value == "two" || value == "2")
    {
        result = "2";
    }
    else if(value == "three" || value == "3")
    {
        result = "3";
    }
    else if(value == "four" || value == "4")
    {
        result = "4";
    }
    else
    {
        result = "not a number I know";
    }

    cout << "The input number is " << result << ".\n";
    return 0;
}