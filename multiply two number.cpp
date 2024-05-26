#include <iostream>
using namespace std;

int main() {
    double num1, num2, product;

    // Input the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Input the second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Multiply the two numbers
    product = num1 * num2;

    // Output the result
    cout << "The product of " << num1 << " and " << num2 << " is " << product << "." << endl;

    return 0;
}

