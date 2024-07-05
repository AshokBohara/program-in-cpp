#include <iostream>
using namespace std;

class unary {
    int x, y;
public:
    unary(int a, int b) : x(a), y(b) {}

    void display() {
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
    }

    // Overloading the unary minus operator
    void operator-() {
        x = -x;
        y = -y;
    }
};

int main() {
    unary u(20, -25);
    u.display();

    -u;  // Using the overloaded unary minus operator
    cout << "After overloading operator:\n";
    u.display();

    return 0;
}

