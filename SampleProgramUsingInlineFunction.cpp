//example of using inline function
#include<iostream>
#include<conio.h>
using namespace std;
inline int sum(int a, int b)//inline function declaration.
{
int c;
c=a+b;
return(c);
}
int main()
{
	int a,b,c;
	cout<<"enter two number"<<endl;
	cin>>a>>b;
	c=sum(a,b);
	cout<<"result="<<c;
	getch();
}
	
