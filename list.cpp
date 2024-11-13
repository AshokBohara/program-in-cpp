#include<iostream>
#include<utility>
#include<list>
using namespace std;
//list use all methods used in vector
//extra in lis are push_front(); pop_front(); emplace_front();
int main()
{
  list<int>l;
  l.push_back(5);
   for(auto element:l)
   {
    cout<<element<<" ";

   }
   cout<<endl;
   l.push_front(8);
   for(auto element:l)
   {
    cout<<element<<" ";
   }
   cout<<endl;
    return 0;
   

}