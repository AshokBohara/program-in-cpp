#include <iostream>
using namespace std;

class time {
    int hrs, mins;

public:
    time(int a, int b) {
        hrs = a;
        mins = b;
    }

    operator int() {
        int m = hrs * 60 + mins;
        return m;
    }
};

int main() {
    time t1(1, 25);
    int minutes = t1; // class type to int
    cout << "Minutes: " << minutes << endl;

    return 0;
}

