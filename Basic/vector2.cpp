//in this example how to use insert,erasor.. using cpp for vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //erasor
    vector<int> v(5,7);
    v.push_back(3);
    v.push_back(8);
    v.erase(v.end()-1);
    // for(auto element:v)
    // {
    //     cout<<element;
        
    // }
    // cout<<endl;
    // v.erase(v.begin(),v.end()-1);
    // for(auto element:v)
    // {
    //     cout<<element;
    // }
    // cout<<endl;

    // //insert.

    // v.insert(v.begin(),3,7);//insert value 777 from this line.
    // for(auto element:v)
    // {
    //     cout<<element;
    // }

    //vector size.
    // cout<<endl<<v.size();


     //pop
    //  v.pop_back();

    // clear
    // v.clear();

    // cout<<v.empty();

     return 0;

    
}
