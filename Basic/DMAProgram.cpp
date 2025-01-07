//example of DMA
#include<iostream>
#include<conio.h>
using namespace std;

class calculate {
    float s1, s2, s3, s4, s5;
    public:
        void read() {
            cout << "Enter marks of five subjects: ";
            cin >> s1 >> s2 >> s3 >> s4 >> s5;
        }

        void display() {
            if (s1 >= 45 && s2 >= 45 && s3 >= 45 && s4 >= 45 && s5 >= 45)
                cout << "Pass" << endl;
            else
                cout << "Fail" << endl;
        }
};

int main() {
    int i, n;
    cout << "How many students are there? ";
    cin >> n;

    calculate* R = new calculate[n];  // Dynamically allocating array

    // Input marks and display result for each student
    for (i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        R[i].read();
        R[i].display();
    }

    delete[] R;  // Correct deletion of dynamically allocated array
    getch();
    return 0;
}

