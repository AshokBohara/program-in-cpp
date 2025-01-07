#include<iostream>
using namespace std;
class findintrest
{
	int principle,rate,time;
	public:
		findintrest(int a,int b,int c=12){
			principle=a;
			time=b;
			rate=c;
			cout<<"The required simple intrest is "<<principle*rate*time<<endl;
		}
};
int main()
{
	findintrest t1(10,30);
	return 0;
}
