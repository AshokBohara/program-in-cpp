#include<iostream>
using namespace std;
class sum{
	int num1,num2,add;
	public:
		sum(int a,int b =2){
			num1=a;
			num2=b;
			add=num1+num2;
			cout<<"The addition of two numbers is : "<<add;
			}
};
int main()
{
	sum obj(10); // output =12;
	sum obj1(10,20); //output =30;
	return 0;
}

