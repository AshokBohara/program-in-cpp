//example of finding total marks from two base classes
#include<iostream>
using namespace std;
class Student{
	protected:
		int roll;
		public:
			void fun1()
			{
			
			cout<<"Enter the roll number"<<endl;
			cin>>roll;
		    }
};
class Test : protected Student{
    protected:
	float sub1,sub2;
	public:
		void initialize(){
			cout<<"Enter the marks in 2 subjects respectively"<<endl;
			cin>>sub1>>sub2;
		}
};
class Result : protected Test{
	float total;
	public:
		void display()
		{
			fun1();
			initialize();
			cout<<"The total marks is"<<sub1+sub2<<endl;
		}
};
int main()
{
	Result obj;
	obj.display();
	return 0;
}
