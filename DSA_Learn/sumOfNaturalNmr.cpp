#include <iostream>
using namespace std;

int sum(int n)
 {
    if (n == 0) // Base case
        return 0;
    else
        return n + sum(n - 1);
}

int main()
 {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of first " << n << " natural numbers is " << sum(n) << endl;
    return 0;
}