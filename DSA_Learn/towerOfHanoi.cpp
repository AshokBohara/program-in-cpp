// implementation of tower of hanoi using c++..
#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char dest, char aux) {
    if (n == 1) {
        cout << "Move DISK " << n << " from " << source << " to " << dest << endl;
        return; // Exit the function after moving the disk
    }

    towerOfHanoi(n - 1, source, aux, dest);
    cout << "Move DISK " << n << " from " << source << " to " << dest << endl;
    towerOfHanoi(n - 1, aux, dest, source);
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    towerOfHanoi(n, 'S', 'D', 'A'); // S = Source, D = Destination, A = Auxiliary
    return 0;
}
