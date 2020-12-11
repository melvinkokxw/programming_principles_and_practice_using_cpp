#include "../../std_lib_facilities.h"

int main()
{
    string previous = " ";
    string current;
    while (cin >> current) { // while `cin >> current` succeeds
        if (previous == current) {
            cout << "repeated word: " << current << '\n';
        }
        previous = current;
    }
}