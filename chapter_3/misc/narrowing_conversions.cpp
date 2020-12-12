// test for errors when doing narrowing conversion

#include "../../std_lib_facilities.h"

int main()
{
    double d = 0;
    while (cin >> d)
    {                                    // repeat statements below as long as numbers are input
        int i = d;                       // try to squeeze a double into an int
        char c = i;                      // try to squeeze an int into a char
        int i2 = c;                      // get the integer value of the character
        cout << "d==" << d               // the original double
             << "\ni==" << i             // converted to int
             << "\ni2==" << i2           // int value of char
             << "\nchar(" << c << ")\n"; // the char
    }
}

/* Notes:
double -> int conversion fails when > max int value, i.e. 4 bytes
int -> char conversion fails when corresponding char does not exist in ASCII table for the given int value
char -> int conversion fails when char is undefined, i.e. int -> char conversion in previous step failed

fail is defined as not giving the expected results
*/