//this is an example of multi level inheritance 
#include <iostream>
using namespace std;

// Base class
class Number 
{
protected:
    int num;
public:
    void setNumber(int n) 
	{
        num = n;
    }
    int getNumber() const 
	{
        return num;
    }
};

// Derived class from Number
class Arithmetic : public Number 
{
public:
    int square() const 
	{
        return num * num;
    }
};

// Derived class from Arithmetic
class AdvancedArithmetic : public Arithmetic 
{
public:
    int cube() const 
	{
        return num * num * num;
    }
};

int main() 
{
    AdvancedArithmetic obj;
    obj.setNumber(3);
    
    cout << "Number: " << obj.getNumber() << endl;
    cout << "Square: " << obj.square() << endl;
    cout << "Cube: " << obj.cube() << endl;
    
    return 0;
}

