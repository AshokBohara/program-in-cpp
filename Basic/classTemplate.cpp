//example of class template
#include<iostream>
using namespace std;
// Template class definition
template <class T>
class Test 
{
    T a;  // Template variable 'a'
    
    public:
    // Constructor
    Test(T x) 
	{
        a = x;
    }
    
    // Function to display the value of 'a'
    void show()
	 {
        cout << "a = " << a << endl;
    }
};

// Main function
int main() 
{
    // Creating class objects using different data types
    Test<int> test1(10);  // Integer type
    Test<float> test2(12.12);  // Float type

    test1.show();  // Display the value of 'a' for test1
    test2.show();  // Display the value of 'a' for test2
    
    return 0;
}

