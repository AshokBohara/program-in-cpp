//concept of get data and put data using parameterized constructor 
#include <iostream>
#include <string>
using namespace std;
class Employee 
{
private:
    int id;
    string name;
    double salary;
public:
    // Parameterized constructor
    Employee(int i, string n, double s) : id(i), name(n), salary(s) {}
    // Member functions to get and put data
    void getdata(int i, string n, double s);
    void putdata() const;
};
void Employee::getdata(int i, string n, double s) 
{
    id = i;
    name = n;
    salary = s;
}
void Employee::putdata() const 
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
}
int main() 
{
    // Create an Employee object using the parameterized constructor
    Employee emp1(1, "ashok", 3000);
    // Call putdata to display the initialized data
    emp1.putdata();
    //the employee data using getdata
    emp1.getdata(2, "ansarul ", 2000);
    emp1.putdata();
    return 0;
}

