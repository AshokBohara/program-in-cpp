//example of static member function 
#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
private:
static int count;
public:
sample()
{
++count;
}
static void display()
{
	cout<<"counter value="<<count;
}
};
int sample::count=0;
int main()
{
	cout<<"before creation of object"<<endl;
	sample::display();
	sample obj1,obj2,obj3;
	cout<<"\nafter creation of object"<<endl;
	sample::display();
	cin.get();
	return(0);
}
