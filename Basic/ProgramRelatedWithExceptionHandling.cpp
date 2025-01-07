//example of exception handling.
#include<iostream>
using namespace std;
//Usually,we dont define class in the programs of exception handling.
//We use three keywords in exception handling.They are : try,catch and throw.
//Programs statements that you want to monitor for exceptions are contained in try block.
//If any exception occurs within the try block, it is thrown(using 'throw' keyword)
//The exception is caught using 'catch' keyword.
//while coding , we proceed with try block(throw block within it) immediately followed by catch blocks.
//Multiple catch blocks are allowed , if necessary. But there shouldnt be any other type of codes between the catch blocks.

int main()
{
	int a,b,x;
	cout<<"Enter the value of first number"<<endl;
	cin>>a;
	cout<<"Enter the value of second number"<<endl;
	cin>>b;
	x=a-b;
	try{
		if (x!=0)
		{
			cout<<"Result (a/x) "<< a/x<<endl;
		}
		else {
			throw(x);
		}
	}
	catch (int i)
	{
		cout<<"Exception caught"<<endl;
	}
	cout<<"END"<<endl;
	return 0;
	
	
}
