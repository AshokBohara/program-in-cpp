#include <iostream>
#include <cmath>
using namespace std;

// Base class
class Number {
protected:
    int num;
public:
    void inputNumber() {
        cout << "Enter a number: ";
        cin >> num;
    }
};

// Derived class
class PrimeChecker : public Number {
public:
    bool isPrime() {
        if (num <= 1) return false;
        if (num == 2) return true;
        if (num % 2 == 0) return false;
        for (int i = 3; i <= sqrt(num); i += 2) {
            if (num % i == 0) return false;
        }
        return true;
    }

    void checkPrime() {
        if (isPrime()) {
            cout << num << " is a prime number." << endl;
        } else {
            cout << num << " is not a prime number." << endl;
        }
    }
};

int main() {
    PrimeChecker pc;
    pc.inputNumber();
    pc.checkPrime();
    return 0;
}

