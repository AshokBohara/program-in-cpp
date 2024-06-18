#include<iostream>
using namespace std;
class area{
	int x,y;
	public:
	area(){
		x=0;
		y=0;
		cout<<"Enter the length and breadth of rectangle"<<endl;
		cin>>x>>y;
		cout<<"The area using default constructor is"<<x*y<<endl;
	}
	area(int a ,int b){
		x=a;
		y=b;
		cout<<"The area using parameterized constructor is"<<x*y;
	}
};
int main()
{
	area t2;
	area t1(2,5);
	return 0;
}
