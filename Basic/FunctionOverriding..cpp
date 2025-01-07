//example of function overloading
#include<iostream>
using namespace std;
class base{
	public:
		void show()
		{
			cout<<"Test Class  has been invoked."<<endl;
			
		}
	
};
class derived : public base{
	public:
		void show()
		{
			cout<<"Derived class has been invoked.";
		}
};
int main()
{
	derived obj;
	obj.show(); //function of derived class.
	obj.base::show(); //function of base class.
	return 0;
}
