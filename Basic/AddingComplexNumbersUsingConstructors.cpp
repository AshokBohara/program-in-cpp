//example of adding complex number using constructor answer is in one is real number and another is an imaginary number.
#include<iostream>
#include<math.h>
using namespace std;
class add_complex{
	int real;
	float imaginary;
	public:
		add_complex(int a, float b){
			real=a;
			imaginary=b;
		}
		void add(add_complex t1, add_complex t2)
		{
			real=t1.real+t2.real;
			imaginary=t1.imaginary+t2.imaginary;
		
		}
		void display()
		{
			cout<<"The required real number is"<<real<<"whereas imaginary is"<<imaginary;
		}
};

int main()
{
	add_complex t1(3,4.5);
	add_complex t2(5,7.89);
	add_complex t3;
	t3.add(t1,t2);
	t3.display();
	
	return 0;
}
	
