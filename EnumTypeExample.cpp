#include <iostream>
using namespace std;

enum Week {sun, mon, tue, wed, thur, fri, sat};

int main() {
    int selected_day;
    cout << "Enter day (0-6): ";
    cin >> selected_day;

    switch(selected_day) {
        case sun:
            cout << "Selected day is Sunday" << endl;
            break;
        case mon:
            cout << "Selected day is Monday" << endl;
            break;
        case tue:
            cout << "Selected day is Tuesday" << endl;
            break;
        case wed:
            cout << "Selected day is Wednesday" << endl;
            break;
        case thur:
            cout << "Selected day is Thursday" << endl;
            break;
        case fri:
            cout << "Selected day is Friday" << endl;
            break;
        case sat:
            cout << "Selected day is Saturday" << endl;
            break;
        default:
            cout << "Invalid day! Please enter a number between 0 and 6." << endl;
    }

    return 0;
}

