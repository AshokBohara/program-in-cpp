//displaying details of teacher whith name id and salary
#include <iostream>
#include <string> // Include string for using string type
using namespace std;

class Teacher {
public:
    string name;
    int id;
    float salary;

    // Constructor to initialize the data members
    Teacher(string n, int x, float s) : name(n), id(x), salary(s) {}

    // Function to display the teacher's details
    void display() {
        cout << "Name: " << name << ", ID: " << id << ", Salary: " << salary << endl;
    }
};

int main() {
    // Create an object of Teacher class with initial values
    Teacher t("Ashok", 7, 20000);

    // Call the display function
    t.display();

    return 0;
}

