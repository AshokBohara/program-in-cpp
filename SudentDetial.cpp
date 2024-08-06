//student detail detail of function declaration ,definition for displaying data
#include<iostream>
#include<conio.h>
using namespace std;

class Student {
    char student_name[20];
    int roll_no;
    char faculty[20];

public:
    void readData(); // Function declaration
    void displayData(); // Function declaration
};

// Function definition for reading data
void Student::readData() {
    cout << "Enter student name: ";
    cin >> student_name;
    cout << "Enter roll number: ";
    cin >> roll_no;
    cout << "Enter faculty: ";
    cin >> faculty;
}

// Function definition for displaying data
void Student::displayData() {
    cout << "\nStudent Name\nRoll No\nFaculty\n";
    cout << student_name  << roll_no<< faculty << endl;
}

int main() {
    Student s1, s2;
    s1.readData();
    s1.displayData();
    s2.readData();
    s2.displayData();
    getch();
    return 0;
}

