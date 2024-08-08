//using inline function finding the sum of two number
#include <iostream>
#include <conio.h>
using namespace std;

// Inline function declaration
inline int sum(int a, int b) {
    return a + b;
}

int main() {
    int a, b, c;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    c = sum(a, b); // Corrected variable and function call
    cout << "Result = " << c << endl;
    getch();
    return 0;
}

