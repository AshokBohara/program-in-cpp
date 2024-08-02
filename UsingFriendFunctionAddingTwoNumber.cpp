#include <iostream>
using namespace std;

class Number1; // Forward declaration

class Number2 {
private:
    int value;
public:
    Number2(int v) : value(v) {}

    // Friend function declaration
    friend int add(Number1 num1, Number2 num2);
};

class Number1 {
private:
    int value;
public:
    Number1(int v) : value(v) {}

    // Friend function declaration
    friend int add(Number1 num1, Number2 num2);
};

// Friend function definition
int add(Number1 num1, Number2 num2) {
    return num1.value + num2.value;
}

int main() {
    Number1 num1(5);
    Number2 num2(10);

    cout << "Sum: " << add(num1, num2) << endl;

    return 0;
}

