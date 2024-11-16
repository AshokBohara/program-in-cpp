#include<iostream>
using namespace std;
int sumOfN(int n)
{
    if(n==0)
        return 0;
    return n+sumOfN(n-1);
}
int factorial( int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int n=5;
      cout<<sumOfN(n);
    cout<<endl;
    cout<<factorial(n);
    return 0;

}
