#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char operation;

    cout << "Welcome to the Basic Calculator!" << endl;

    // Input first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Input operation
    cout << "Enter an operation (+ or -): ";
    cin >> operation;

    // Input second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Perform calculation based on the operation
    if (operation == '+') {
        cout << "Result: " << num1 + num2 << endl;
    } else if (operation == '-') {
        cout << "Result: " << num1 - num2 << endl;
    } else {
        cout << "Invalid operation! Please use + or -." << endl;
    }

    return 0; // Ensure proper termination
}
