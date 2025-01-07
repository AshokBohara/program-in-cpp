//finding mean valu of numbers enter bye users
#include<iostream>
#include<math.h>
using namespace std;
class sample{
	int num1,num2;
	public:
		void input(){
		    cout<<"Enter a number"<<endl;
			cin>>num1;
			cout<<"Enter another number"<<endl;
			cin>>num2;
		}
	
		friend void mean( sample t1){
		int c;
		c=(t1.num1+t1.num2)/2;
		cout<<"The mean of the given numbers is "<<c;	
		}
};
 int main()
 {
 	sample t1;
 	t1.input();
 	mean(t1);
 	return 0;
 }
