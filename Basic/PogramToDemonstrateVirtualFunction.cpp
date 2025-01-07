//example of virtual function
#include<iostream>
using namespace std;

class base {
public:
    void display() {
        cout << "base display" << endl;
    }
    virtual void show() {
        cout << "base show" << endl;
    }
};

class derived : public base {
public:
    void display() {
        cout << "derived display" << endl;
    }
    void show() override {
        cout << "derived show" << endl;
    }
};

int main() {
    base *bptr;
    base b;
    derived d;
    bptr = &b;
    bptr->display(); 
    bptr->show();    
    bptr = &d;
    bptr->display(); // Calls base class display
    bptr->show();    // Calls derived class show due to virtual function

    return 0;
}

