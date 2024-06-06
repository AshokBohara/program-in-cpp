//example of getdata and put data using c++
#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    int id;
    string name;
    double salary;
public:
    // Member function declarations
    void getdata(int, string, double);
    void putdata();
};
// Definition of getdata outside the class using scope resolution operator
void Employee::getdata(int empId, string empName, double empSalary) {
    id = empId;
    name = empName;
    salary = empSalary;
}
// Definition of putdata outside the class using scope resolution operator
void Employee::putdata() {
    cout << "Employee ID: " << id << endl;
    cout << "Employee Name: " << name << endl;
    cout << "Employee Salary: " << salary << endl;
}
int main() {
    // Create an Employee object
    Employee emp;
    // Call getdata to initialize employee details
    emp.getdata(07, "ashok", 20000);
    // Call putdata to display employee details
    emp.putdata();
    return 0;
}
