#include<iostream>
using namespace std;
class class2;
class class1{
	int num1;
	public:
		void fun1(){
		cout<<"Enter first number"<<endl;
		cin>>num1;
	}
	friend void swap(class1 obj1, class2 obj2);
	
};
class class2{
	int num2;
	public:
		void fun2(){
		cout<<"Enter second number"<<endl;
		cin>>num2;
	}
	friend void swap(class1 obj1, class2 obj2);
	
};
void swap(class1 obj1,class2 obj2){
	int num;
	num=obj1.num1;
	obj1.num1=obj2.num2;
	obj2.num2=num;
	cout<<"After swapping we get the following"<<endl<<"1st number ="<<obj1.num1<<endl;
	cout<<"2nd number ="<<obj2.num2<<endl;
}
int main()
{
	class1 obj1;
	class2 obj2;
	obj1.fun1();
	obj2.fun2();
	swap(obj1,obj2);
	return 0;
}
