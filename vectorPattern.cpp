//using cpp example of vector ..
#include<iostream>
using namespace std;
int main()
{
    vector<int>v(1,4); // [4]
    v.push_back(1); // [4, 1]
    v.emplace_back(2); // [4, 1, 2]
    return 0;
}
