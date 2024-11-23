//example of vector using c++,in DSA..
#include<iostream>
#include<vector>
using namespace std;



//vector

// int main()
// {
//     vector<int>v(1,4); // [4]
//     v.push_back(1); // [4, 1]
//     v.emplace_back(2); // [4, 1, 2]
//     return 0;
// }

//iterator.

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(8);
    v.push_back(11);
    vector<int>::iterator it=v.begin();
    // vector<string> vec; 
    // vec.push_back("ashok");
    // vec.push_back("bohara");
    // vector<string>::iterator itor= vec.begin();
    cout<<*++(++it);//display 11 ..
    return(0);
}
