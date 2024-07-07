//student detail
#include<iostream>
using namespace std;
class Student{
	char stdnt_name[20], faculty[20];
	int roll_no;
	public:
		void readdata(){
			cout<<"Enter the name of student"<<endl;
			cin>>stdnt_name;
			cout<<"Enter the faculty of student"<<endl;
			cin>>faculty;
			cout<<"Enter the roll no. of student"<<endl;
			cin>>roll_no;
			
		}
		
		void displaydata()
		{
			cout<<"The detailed information are as follows:"<<endl;
			cout<<stdnt_name<<endl<<faculty<<endl<<roll_no<<endl<<endl;
			
		}
		
};

int main()
{
	Student obj1,obj2;
	obj1.readdata();
	obj2.readdata();
	obj1.displaydata();
	obj2.displaydata();
	return 0;
}
