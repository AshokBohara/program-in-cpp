//example of default arguments.
#include <iostream>
#include <conio.h>
using namespace std;

// Function definition
void total(int a = 10, int b = 40, int c = 45) {
    cout << "a + b + c = " << (a + b + c) << endl;
}

int main() {
    cout << "Value having all default arguments is: ";
    total();
    cout << "Value having two default arguments is: ";
    total(20, 55);
    cout << "Value having no default arguments is: ";
    total(22, 22, 22);
    getch();
    return 0;
}

