#include <iostream>   // Standard library for input and output

using namespace std;

int main()
{
    int op1, op2;          // Variables to store operands
    char operation;        // Variable to store the operator (+, -, *, /, %)
    char answer = 'y';     // Variable to control whether the loop continues

    // Welcome message displayed once at the start
    cout << "======================================" << endl;
    cout << "   Welcome to the Simple Calculator!   " << endl;
    cout << "   You can use +, -, *, /, or %        " << endl;
    cout << "   Enter expressions like: 5 + 3       " << endl;
    cout << "======================================" << endl;

    // Loop runs as long as user enters 'y' or 'Y'
    while (answer == 'y' || answer == 'Y')
    {
        cout << "Enter expression (e.g., 5 + 3): " << endl;   // Prompt user for input
        cin >> op1 >> operation >> op2;

        // Check which operation to perform
        if (operation == '+')
            cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;   // Addition

        else if (operation == '-')
            cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;   // Subtraction

        else if (operation == '*')
            cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;   // Multiplication

        else if (operation == '/')
        {
            if (op2 == 0)   // Prevent division by zero
                cout << "Error: Division by zero is not allowed." << endl;
            else
                cout << op1 << " / " << op2 << " = "
                << static_cast<double>(op1) / static_cast<double>(op2) << endl;
        }

        else if (operation == '%')
        {
            if (op2 == 0)   // Prevent modulus by zero
                cout << "Error: Modulus by zero is not allowed." << endl;
            else
                cout << op1 << " % " << op2 << " = " << op1 % op2 << endl;   // Modulus
        }

        else
        {
            cout << "Invalid operator. Please use +, -, *, /, or %." << endl;
        }

        // Ask user if they want to continue
        cout << "Do you wish to evaluate another expression? (y/n): ";
        cin >> answer;
    }

    cout << "Program Finished" << endl;   // Final message when loop ends
    return 0;   // Exit program
}