#include<iostream>
using namespace std;
int main()
{
	float si,p,t,r;
	cout <<"enter principle";
	cin>>p;
	cout<<"enter time";
	cin>>t;
	cout<<"enter rate";
	cin>>r;
	si=(p*t*r)/100;
	cout<<"SI is"<<si;
	return 0;
}
