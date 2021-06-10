#include <iostream>
using namespace std;

bool divisibility(string str, int num) {
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
    string dividend;
    int divisor;
    cout << "Enter Dividend: ";
    cin >> dividend;
    cout << "Enter Divisor: ";
    cin >> divisor;
    if (divisibility(dividend, divisor)) {
        cout << dividend << " is divisible by " << divisor << endl;
    } else {
        cout << dividend << " isn't divisible by " << divisor << endl;
    }
}
