#include<iostream>
using namespace std;
class number
{
	protected:
		int n1,n2;
		public:
		void input(int a, int b)
		{
		n1=a;
		n2=b;
			
		}
	
};
class sum:public number
{
	public:
		void display()
		{
			cout<<"sum ="<<n1+n2<<endl;
		}
};
int main()
{
	sum s;
	s.input(4,5);
	s.display();
	return 0;
}
