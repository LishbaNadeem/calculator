#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Welcome to the Enhanced Calculator!" << endl;

    // Input first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Input operation
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    // Input second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Perform calculation based on the operation
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
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        default:
            cout << "Invalid operation! Please use +, -, *, or /." << endl;
    }

    return 0; // Properly terminate the program
}
