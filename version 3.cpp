#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Welcome to the Enhanced Calculator with Input Validation!" << endl;

    // Input first number
    cout << "Enter the first number: ";
    while (!(cin >> num1)) { // Check if the input is valid
        cin.clear();         // Clear the error flag
        cin.ignore(1000, '\n'); // Ignore invalid input
        cout << "Invalid input. Please enter a number: ";
    }

    // Input operator
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;
    while (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
        cout << "Invalid operation. Please enter one of +, -, *, or /: ";
        cin >> operation;
    }

    // Input second number
    cout << "Enter the second number: ";
    while (!(cin >> num2)) { // Check if the input is valid
        cin.clear();         // Clear the error flag
        cin.ignore(1000, '\n'); // Ignore invalid input
        cout << "Invalid input. Please enter a number: ";
    }

    // Handle division by zero
    if (operation == '/' && num2 == 0) {
        cout << "Error: Division by zero is not allowed!" << endl;
    } else {
        // Perform calculation
        switch (operation) {
            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;
            case '/':
                cout << "Result: " << num1 / num2 << endl;
                break;
        }
    }

    return 0; // Properly terminate the program
}
