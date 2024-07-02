#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;
    // Corrected the file path to use double backslashes or a single forward slash
    file.open("c:\\firstfile.txt", ios::out);
    
    // Check if the file is open before writing to it
    file << "hello BSE 2nd sem" << endl;
    file.close();

    return 0;
}

