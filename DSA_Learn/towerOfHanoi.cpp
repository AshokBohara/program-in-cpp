
#include <iostream>
using namespace std;

void towerOFhanoi(int n, char source, char dest, char aux)
{
  if(n == 1)
  {
    cout<<"  Move DISK "<<n<<" from "<<source<<" to "<<dest<<endl;
    return;
  }
  towerOFhanoi(n-1, source, aux, dest);
  cout<<"  Move DISK "<<n<<" from "<<source<<" to "<<dest<<endl;
  towerOFhanoi(n-1, aux, dest, source);
}

int main()
{
    int n;
    cout<<"\n\n Enter number of disks: ";
    cin>>n;
    towerOFhanoi(n, 'S', 'D', 'A');
    return 0;
}