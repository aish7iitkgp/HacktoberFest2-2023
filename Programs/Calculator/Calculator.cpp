#include <iostream>

using namespace std;

// Function to add two numbers
double add(double x, double y) {
    return x + y;
}

// Function to subtract two numbers
double subtract(double x, double y) {
    return x - y;
}

// Function to multiply two numbers
double multiply(double x, double y) {
    return x * y;
}

// Function to divide two numbers
double divide(double x, double y) {
    if (y != 0) {
        return x / y;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
}

int main() {
    char choice;
    double num1, num2;

    cout << "Select Operation." << endl;
    cout << "1.Add" << endl;
    cout << "2.Subtract" << endl;
    cout << "3.Multiply" << endl;
    cout << "4.Divide" << endl;

    while (true) {
        // Take input from the user
        cout << "Enter Operator(1/2/3/4): ";
        cin >> choice;

        // Check if choice is one of the four options
        if (choice == '1' || choice == '2' || choice == '3' || choice == '4') {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            if (choice == '1') {
                cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
            } else if (choice == '2') {
                cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
            } else if (choice == '3') {
                cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
            } else if (choice == '4') {
                cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
            }
            break;
        } else {
            cout << "Invalid Input" << endl;
        }
    }

    return 0;
}
