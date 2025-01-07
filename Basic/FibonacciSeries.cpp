#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, nextTerm;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: " << a << ", " << b;

    for (int i = 1; i <= n - 2; ++i) {
        nextTerm = a + b;
        cout << ", " << nextTerm;
        a = b;
        b = nextTerm;
    }

    cout << endl;
    return 0;
}

