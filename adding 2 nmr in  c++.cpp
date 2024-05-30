//sum of twwo number using c++ programming
#include <iostream>
using namespace std;

int main() {
    // Declare variables to store the two numbers
    int num1, num2;
    // Prompt the user to enter the first number
    cout << "Enter the first number: ";
    cin >> num1;
    // Prompt the user to enter the second number
    cout << "Enter the second number: ";
    cin >> num2;
    // Add the two numbers and store the result in a variable
    int sum = num1 + num2;
    // Print the result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    // Return 0 to indicate successful execution
    return 0;
}

