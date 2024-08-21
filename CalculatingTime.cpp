#include<iostream>
#include<math.h>
using namespace std;
class time 
{
	int hours,mins,secs;
	public:
		void input(){
			cout<<"Please enter time"<<endl;
			cout<<"Hours :"<<endl;
			cin>>hours;
			cout<<"Minutes :"<<endl;
			cin>>mins;
			cout<<"Seconds :"<<endl;
			cin>>secs;
		} 
		void display()
		{
			cout<<"Time:"<<hours<<":"<<mins<<":"<<secs<<endl;
		}
		 void sum(time t1, time t2);
};
void time::sum(time t1, time t2){
	secs=t1.secs +t2.secs;
	mins=secs/60 + t1.mins + t2.mins;
	secs=secs%60;
	hours=mins/60+t1.hours+t2.hours;
	mins=mins%60;
}
int main()
{
	time t1,t2,t3;
	t1.input();
	t2.input();
	t3.sum(t1,t2);
	t1.display();
	t2.display();
	t3.display();
	return 0;
}
