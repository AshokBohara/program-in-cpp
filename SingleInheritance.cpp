//using single inheritance detail of a students
#include <iostream>
using namespace std;
class student
{
protected:
    string name;
    int roll;
    float sub1, sub2;

public:
    void input(string neem, int rone, float s1, float s2)
    {
        name = neem;
        sub1 = s1;
        sub2 = s2;
        roll=rone;
    }
    void display(){
        cout<<name<<sub1<<sub2<<roll<<endl;
    }

};

int
main()
{
    student s;
    s.input("Ashok",7,90,80);
    s.display();
    return 0;
}
