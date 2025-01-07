#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;
    // Use a writable path such as within your Documents directory
    file.open("C:\\Users\\YourUsername\\Documents\\firstfile.txt", ios::out);

    // Check if the file is open before writing to it
    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    file << "hello BSE 2nd sem" << endl;
    file.close();

    cout << "File written successfully." << endl;
    return 0;
}

