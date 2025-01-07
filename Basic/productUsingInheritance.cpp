//finding product of two number using inheritance.
#include<iostream>
using namespace std;

class number
{
  protected:
    int n1, n2;
  public:
    void input(int a, int b)
    {
      n1 = a;
      n2 = b;
    }	
};

class product : public number
{
  public:
    void display()
    {
      cout << "product = " << n1 * n2 << endl;
    }
};

int main()
{
  product p; // Correctly declare an object of type product
  p.input(5, 4); // Call the input method on the object p
  p.display(); // Call the display method on the object p
  return 0;
}

