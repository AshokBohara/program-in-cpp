#include <iostream>
using namespace std;

void lower(int n)
 {
    int i, j, k;
    for (i = 0; i < n; i++)
     { // Removed extra 'int'
        for (j = 0; j < i + 1; j++)
         {
            cout << "*";
        }
        for (k = 0; k < 2 * (n - i - 1); k++)
         {
            cout << " ";
        }
        for (j = 0; j < i + 1; j++)
         {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n = 4;
    lower(n);  // Changed function name to match
    return 0;
}
