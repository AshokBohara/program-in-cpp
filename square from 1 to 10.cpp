#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 10; ++i) {
        int square = i * i;
        // Print the number and its square
        cout << "Square of " << i << " is: " << square << endl;
    }
    return 0;
}

