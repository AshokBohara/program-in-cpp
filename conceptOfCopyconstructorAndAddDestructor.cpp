//program is releted to concept of copy constructor and add destructor with detail
#include <iostream>
using namespace std;
class Sample 
{
private:
    int* data;
public:
    // Constructor
    Sample(int value) 
	{
        data = new int;
        *data = value;
        cout << "Constructor called. Value: " << *data << endl;
    }
    // Copy Constructor
    Sample(const Sample& other) 
	{
        data = new int;
        *data = *(other.data);
        cout << "Copy Constructor called. Copied Value: " << *data << endl;
    }
    // Destructor
    ~Sample() 
	{
        cout << "Destructor called. Deleting value: " << *data << endl;
        delete data;
    }
    // Member function to display the value
    void display() 
	const 
	{
        cout << "Value: " << *data << endl;
    }
};
int main() 
{
    // Create an object of Sample
    Sample obj1(10);
    obj1.display();
    // Create another object using the copy constructor
    Sample obj2 = obj1;
    obj2.display();
    return 0;
}

