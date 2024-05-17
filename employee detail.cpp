#include <iostream>
#include <string>

class Employee {
private:
    int eid;
    std::string ename;
    float salary;

public:
    void inputDetails() {
        std::cout << "Enter Employee ID: ";
        std::cin >> eid;
        std::cin.ignore(); // to ignore the newline character left in the buffer
        std::cout << "Enter Employee Name: ";
        std::getline(std::cin, ename);
        std::cout << "Enter Employee Salary: ";
        std::cin >> salary;
    }

    // Function to display employee details
    void displayData() {
        std::cout << "\nEmployee Details:\n";
        std::cout << "ID: " << eid << std::endl;
        std::cout << "Name: " << ename << std::endl;
        std::cout << "Salary: $" << salary << std::endl;
    }
};

int main() {
    Employee emp;
    emp.inputDetails();
    emp.displayData();
    return 0;
}

