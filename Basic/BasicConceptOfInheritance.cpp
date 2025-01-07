//example of Inheritance
#include <iostream>
// #include <conio.h> // Not needed in modern C++

class A {
protected:
    int a;

public:
    void geta(int x) {
        a = x;
    }

    void display() {
        std::cout << "a = " << a << std::endl;
    }
};

class B : public A {
public:
    void display() {
        std::cout << "Value of a = " << a << std::endl;
    }
};

int main() {
    B b;
    b.geta(5);
    b.display();

    // getch(); // Use cin.get() or remove it
    std::cin.get(); // Optional, to pause the console before exit
    return 0;
}

