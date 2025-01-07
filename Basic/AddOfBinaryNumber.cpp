//program to add binary number in object oritented program(cpp)
#include <iostream>
#include <algorithm>
using namespace std;

// Function to add two binary numbers

string addBinary(string a, string b) 
{
    string result = ""; // Initialize the result string
    int carry = 0; // Initialize the carry to 0
    int i = a.size() - 1; // Pointer for the first binary number
    int j = b.size() - 1; // Pointer for the second binary number

    // Traverse both strings from right to left
    
    while (i >= 0 || j >= 0 || carry) 
	{
        // Add binary digits and the carry
        carry += (i >= 0) ? a[i--] - '0' : 0; // Convert char to int
        carry += (j >= 0) ? b[j--] - '0' : 0;

        // Append the current digit to the result
        result += (carry % 2) + '0'; // Convert int to char

        // Update carry (either 0 or 1)
        carry /= 2;
    }

    // Since the result is constructed backwards, reverse it
    
    reverse(result.begin(), result.end());
    return result;
}

int main() 
{
    string binary1, binary2;
    cout << "Enter first binary number: ";
    cin >> binary1;
    cout << "Enter second binary number: ";
    cin >> binary2;

    // Add the binary numbers and display the result
    
    string sum = addBinary(binary1, binary2);
    cout << "Sum of binary numbers: " << sum << endl;

    return 0;
}

