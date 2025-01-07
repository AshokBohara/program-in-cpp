//example of private member function.
#include<iostream>
#include<math.h>
using namespace std;
class employee{
	char name[20], address[20];
	int salary,netsalary,tax;
	double phone;
	float calculate()
	
	{
		    netsalary=salary-tax;
			return(netsalary);
	}
	public:
		void input()
		{
			cout<<"Enter the name of employee"<<endl;
			cin>>name;
			cout<<"Enter the address of employee"<<endl;
			cin>>address;
			cout<<"Enter the contact number of employee"<<endl;
			cin>>phone;
			cout<<"Enter the salary"<<endl;
			cin>>salary;
			cout<<"Enter the tax"<<endl;
			cin>>tax;
		}
		void output()
		{
			cout<<"The name is"<<name<<endl;
			cout<<"The address is\n"<<address<<endl;
			cout<<"The contact number is\n"<<phone<<endl;
			cout<<"The salary is\n"<<salary<<endl;
			cout<<"The tax is\n "<<tax<<endl;
			cout<<"The net salary is "<<calculate();
			
		}
	
};
int main()
{
	employee obj;
	obj.input();
	obj.output();
	return 0;
}
