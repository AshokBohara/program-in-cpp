//finding age of tree by counting ring in the tree in cpp language
#include <iostream>
using namespace std;
class Tree 
{
private:
    int rings; // Number of rings in the tree

public:
    // Constructor to initialize the tree's rings
    Tree(int r) : rings(r) {}

    // Function to calculate and display the age of the tree
    void displayAge() 
	{
        if (rings > 0) 
		{
            cout << "The tree is approximately " << rings << " years old." << endl;
        } else {
            cout << "Invalid number of rings. The tree age can't be determined." << endl;
        }
    }
};

int main() 
{
    int rings;

    // Input: number of rings in the tree
    cout << "Enter the number of rings in the tree: ";
    cin >> rings;

    // Create Tree object and display its age
    Tree tree(rings);
    tree.displayAge();

    return 0;
}

