#include <iostream>
using namespace std;

string str;

bool divide(int num) {
    int tempNum, rem = 0;
    for (int i = 0; i < str.size(); i++) {
        tempNum = (str[i] - '0') + (rem * 10);
        rem = tempNum % num;
    }
    if (rem == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int cases;
    while (cin >> str) {
        if (cases++) {
            cout << endl;
        }
        bool bulukulu = false, ordinary = true;
        if (divide(4) && (divide(400) || !divide(100))) {
            cout << "This is leap year." << endl;
            if (divide(55)) {
                bulukulu = true;
            }
            ordinary = false;
        }
        if (divide(15)) {
            cout << "This is huluculu festival year." << endl;
            ordinary = false;
        }
        if (bulukulu) {
            cout << "This is bulukulu festival year." << endl;
        }
        if (ordinary) {
            cout << "This is an ordinary year." << endl;
        }
    }
}