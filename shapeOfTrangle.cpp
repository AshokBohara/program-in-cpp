//displaying the shape,area of triangle in object oriented program.
#include<iostream>
#include<math.h>
using namespace std;
class shape{
	public:
		float base,height;
		
		shape()
		{
			cout<<"Enter the base for your shape"<<endl;
			cin>>base;
			cout<<"Enter the height for your shape"<<endl;
			cin>>height;
		}
};
class triangle : protected shape{
	public:
		void display1()
		{
			cout<<"The area for your given input in case of triangle is "<<1/2*(base*height)<<endl;
		}
};
class rectangle : protected shape{
	public:
		void display2(){
			cout<<"The area for your given input in case of rectangle is "<<base*height<<endl;
			
		}
		
};
int main()
{
	shape obj;
	triangle t1;
	rectangle t2;
	t1.display1();
	t2.display2();
	return 0;
}
