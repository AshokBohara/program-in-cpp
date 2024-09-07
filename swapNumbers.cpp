#include<iostream>
using namespace std;

class SwapValues 
{
    int a, b;
    
public:
    // Constructor to initialize the values
    SwapValues(int x, int y) 
	{
        a = x;
        b = y;
    }

    // Friend function declaration
    friend void swap(SwapValues &obj); // Takes object by reference

    // Display function to show values
    void display() 
	{
        cout << "a = " << a << ", b = " << b << endl;
    }
};

// Friend function definition
void swap(SwapValues &obj) 
{
    int temp;
    temp = obj.a;
    obj.a = obj.b;
    obj.b = temp;
}

int main() 
{
	
    // Creating an object of SwapValues and initializing with values
    SwapValues obj(11, 222); 
    cout << "Before swapping:" << endl;
    obj.display();
    
    // Call friend function to swap values
    swap(obj);
    cout << "After swapping:" << endl;
    obj.display();
    
    return 0;
}

