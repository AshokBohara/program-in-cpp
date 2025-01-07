//unsing two class finding the greatest number 
#include<iostream>
#include<math.h>
using namespace std;
class XYZ;
class ABC{
	int num1;
	public:
	void fun1()
	{
		cout<<"Enter first number"<<endl;
		cin>>num1;
	}
	friend void max(ABC obj1,XYZ obj2);
};
class XYZ{
		int num2;
		public:
		void fun2()
		{
			cout<<"Enter second number"<<endl;
			cin>>num2;
		}
		friend void max(ABC obj1,XYZ obj2);
};
 void max(ABC obj1,XYZ obj2)
 {
 	if(obj1.num1>obj2.num2)
	 {
 		cout<<"Greatest is "<<obj1.num1;
	 }
	 else
	 {
	 	cout<<"Greatest is "<<obj2.num2;
	 }
 }
 int main()
 {
 	ABC obj1;
 	XYZ obj2;
 	obj1.fun1();
 	obj2.fun2();
 	max(obj1,obj2);
 	return 0;
 	
 }
