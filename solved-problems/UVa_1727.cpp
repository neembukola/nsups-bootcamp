#include <iostream>
using namespace std;

int main(void) {
    int cases;
    cin >> cases;
    while (cases--) {
        string month, day;
        cin >> month >> day;
        if (month == "FEB") {
            cout << "8" << endl;
        } else if (month == "APR" || month == "JUN" || month == "SEP" || month == "NOV") {
            if (day == "THU" || day == "SAT") {
                cout << "9" << endl;
            } else if (day == "FRI") {
                cout << "10" << endl;
            } else {
                cout << "8" << endl;
            }
        } else {
            if (day == "WED" || day == "SAT") {
                cout << "9" << endl;
            } else if (day == "THU" || day == "FRI") {
                cout << "10" << endl;
            } else {
                cout << "8" << endl;
            }
        }
    }
}
