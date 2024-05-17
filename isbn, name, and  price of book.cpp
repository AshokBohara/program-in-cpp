#include <iostream>
using namespace std;

class book
{
private:
    int isbn;
    char name[15];
    float price;

public:
    void readdata() 
	{
        cout << "Enter ISBN, name, and price of book: ";
        cin >> isbn >> name >> price;
    }

    void displaydata() 
	{
        cout << "ISBN: " << isbn << ", Name: " << name << ", Price: " << price << endl;
    }
};

int main() 
{
    book b;
    b.readdata();
    b.displaydata();
    return 0;
}

