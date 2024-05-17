#include <iostream>
using namespace std;

class oddeven {
    private:
        int n;
    public:
        // Constructor to initialize the value of n
        oddeven(int a) {
            n = a;
        }
        // Method to display whether the number is odd or even
        void display() {
            if (n % 2 == 0) {
                cout << n << " is even" << endl;
            } else {
                cout << n << " is odd" << endl;
            }
        }
};

int main() {
    oddeven o(2); // Creating an object of the oddeven class with n = 2
    o.display();  // Calling the display method to check if the number is odd or even
    return 0;
}

