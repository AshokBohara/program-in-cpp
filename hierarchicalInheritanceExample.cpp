#include<iostream>
using namespace std;

class person {
protected:
    char name[20];
    int age;
public:
    void readi() {
        cout << "Enter name and age of person: ";
        cin >> name >> age;
    }
    void display1() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class student : public person {
protected:
    int roll;
    float marks;
public:
    void read2() {
        cout << "Enter roll number and marks: ";
        cin >> roll >> marks;
    }
    void display2() {
        cout << "Roll: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

class employee : public person {
protected:
    int employee_id;
    int salary;
public:
    void read3() {
        cout << "Enter employee ID and salary: ";
        cin >> employee_id >> salary;
    }
    void display3() {
        cout << "Employee ID: " << employee_id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    student s;
    employee e;

    cout << "Student Details:" << endl;
    s.readi();   // Read name and age (inherited from person)
    s.read2();   // Read roll and marks
    s.display1(); // Display name and age
    s.display2(); // Display roll and marks

    cout << "\nEmployee Details:" << endl;
    e.readi();   // Read name and age (inherited from person)
    e.read3();   // Read employee id and salary
    e.display1(); // Display name and age
    e.display3(); // Display employee id and salary

    return 0;
}

