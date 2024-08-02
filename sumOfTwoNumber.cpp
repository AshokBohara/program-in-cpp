#include <iostream>
using namespace std;
class Pokhara 
{
public:
    void display(int a, int b) 
	{
        int sum = a + b;
        cout << "sum = " << sum << endl;
    }
    
    void display() 
	{
        int x = 1;
        int y = 4;
        int sum = x + y;
        cout << "sum = " << sum << endl;
    }
};

int main() 
{
    Pokhara obj;
    obj.display(10, 5); // Calls display with parameters
    obj.display();      // Calls display without parameters
    return 0;
}

