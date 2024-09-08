#include <iostream>
using namespace std;

class Num2;  // Forward declaration of class Num2

class Num1 
{
    private:
        int num1;

    public:
        // Constructor to initialize num1
        Num1(int n1 = 0) : num1(n1) {}

        // Friend function declaration
        friend int addNumbers(Num1 &n1, Num2 &n2);
};

class Num2 
{
    private:
        int num2;

    public:
        // Constructor to initialize num2
        Num2(int n2 = 0) : num2(n2) {}

        // Friend function declaration
        friend int addNumbers(Num1 &n1, Num2 &n2);
};

// Friend function definition to add the numbers from Num1 and Num2
int addNumbers(Num1 &n1, Num2 &n2) 
{
    int sum = n1.num1 + n2.num2;
    return sum;
}

int main() 
{
    Num1 n1(7);   // Create an object of Num1 with num1 = 3
    Num2 n2(7);   // Create an object of Num2 with num2 = 4

    // Call the friend function to add num1 and num2
    cout << "Sum is " << addNumbers(n1, n2) << endl;

    return 0;
}

