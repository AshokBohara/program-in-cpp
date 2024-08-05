#include <iostream>
#include <conio.h>
using namespace std;

class calculate 
{
    float s1, s2, s3, s4, s5;
public:
    void readdata() 
	{
        cout << "Enter marks of five subjects: ";
        cin >> s1 >> s2 >> s3 >> s4 >> s5;
    }
    void display() 
	{
        if (s1 >= 45 && s2 >= 45 && s3 >= 45 && s4 >= 45 && s5 >= 45)
            cout << "Pass" << endl;
        else
            cout << "Fail" << endl;
    }
};

int main() 
{
    int n;
    cout << "How many students are there? ";
    cin >> n;

    calculate* R = new calculate[n];
    
    cout << "Enter marks of each subject for each student:" << endl;
    for (int i = 0; i < n; i++) 
	{
        R[i].readdata();
        R[i].display();
    }

    delete[] R;
    getch();
    return 0;
}

