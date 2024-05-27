#include<iostream>
using namespace std;
class number 
{
	protected:
	int n1,n2;
	public:
	void getdata(int a,int b)
{
	n1=a;
	n2=b;
	}	
};
class sum:public number
{
	private:
	int s;
		public:
			void sdisplay()
			{
				s=n1+n2;
				cout<<"sum="<<s<<endl;
			}
};
class product:public number
{
private:
	int p;
public:
	void pdisplay()
	{
	p=n1*n2;
	cout<<"product="<<p<<endl;
	}
};
int main()
{
	sum s;
product p;
s.getdata(3,5);
p.getdata(4,2);
s.sdisplay() ;
p.pdisplay();
return 0;
}
