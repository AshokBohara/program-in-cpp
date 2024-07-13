#include <iostream>
#include <string> // Include string for using string type
using namespace std;

class Student {
public:
    string name;
    int roll;

    // Constructor to initialize the name and roll
    Student(string a, int b) {
        name = a;
        roll = b;
    }

    // Function to display the name and roll
    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main() {
    // Create an object of Student class
    Student s("ashok", 07);

    // Call the display function
    s.display();

    return 0;
}

