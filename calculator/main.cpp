#include <iostream>

using namespace std;

int main()
{
    int num1, num2, result; // The two numbers user wanna perform operation on and the result of the operator
    char op; // The operator +,-, /, or *

    // Get the first number from the user and store it to num1
    cout << "Enter first number: ";
    cin >> num1;

    // Get the operator from the user and store it to op
    cout << "Enter operator: ";
    cin >> op;

    // Get the second number from the user and store it to num2
    cout << "Enter second number: ";
    cin >> num2;


    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        result = num1 / num2;
    } else {
        cout << "Syntax Error";
    }

    cout << result;

    return 0;
}

