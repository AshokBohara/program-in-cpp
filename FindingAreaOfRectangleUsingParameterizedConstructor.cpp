#include<iostream>
using namespace std;
class area{
	int x,y;
	public:
		area(int a,int b)
		//parameterized constructor
		{
			x=a;
			y=b;
			cout<<"The area of rectangle is "<<x*y;
		}
		
};
int main()
{
	area t1(20,10);
	return 0;
}

