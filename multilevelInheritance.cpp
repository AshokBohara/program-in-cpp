#include<iostream>
using namespace std;

class student {
protected:
    int rollno;
    string name;  // Change to string for full name
public:
    void read1() {
        cout << "Enter name and roll no. of student: ";
        cin >> name >> rollno;
    }
};

class exam : public student {
protected:
    float mark1, mark2, mark3;
public:
    void read() {
        cout << "Enter marks for 3 subjects: ";
        cin >> mark1 >> mark2 >> mark3;
    }
};

class result : public exam {
    float total;
public:
    void display() {
        total = mark1 + mark2 + mark3;
        cout << "Roll No = " << rollno << endl;
        cout << "Name = " << name << endl;
        cout << "Total Marks = " << total << endl;
    }
};

int main() {
    result r;
    r.read1();   // Input student name and roll number
    r.read();    // Input marks for 3 subjects
    r.display(); // Display result

    return 0;
}

