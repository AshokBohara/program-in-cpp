#include <iostream>

using namespace std;

class Ashok {
private:
    int a, b, sm;

public:
    Ashok(int a, int b) {
        this->a = a;
        this->b = b;
    }

    void adNum() {
        sm = a + b;
        cout << sm;
    }
};

int main() {
    Ashok p1(3, 4);
    p1.adNum();
    return 0;
}

