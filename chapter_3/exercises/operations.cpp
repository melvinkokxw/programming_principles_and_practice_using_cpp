#include "../../std_lib_facilities.h"

int main()
{
    cout << "Enter an operation and two operands, seperated by spaces (e.g. + 100 3.14):\n";
    string operation;
    double operand1, operand2;
    cin >> operation;
    cin >> operand1;
    cin >> operand2;

    double result = 0;
    if (operation == "+" || operation == "plus")
    {
        result = operand1 + operand2;
    }
    else if (operation == "-" || operation == "minus")
    {
        result = operand1 - operand2;
    }
    else if (operation == "*" || operation == "mul")
    {
        result = operand1 * operand2;
    }
    else if (operation == "/" || operation == "div")
    {
        result = operand1 / operand2;
    }

    cout << "The result is " << result << "\n";

    return 0;
}