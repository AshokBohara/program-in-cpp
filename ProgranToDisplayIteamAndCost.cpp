//to swoing prize and items 
#include<iostream>
#include<cstring>  // Include this for strcpy()
using namespace std;

class item {
    char name[10];
    float cost;
public:
    void getdata(const char* n, float b) {
        // Copy the passed string 'n' to the name array
        strcpy(name, n);
        cost = b;
    }
    void display(void) {
        cout << "Item: " << name << endl;
        cout << "Cost: " << cost << endl;
    }
};

int main() {
    item x;
    x.getdata("Samosa", 60);  // Call getdata before display
    x.display();                // Display the initialized values
    return 0;
}

