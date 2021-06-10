#include <iostream>
using namespace std;

string divideLargeNumber(string number, int divisor) {
    string result;
    int index = 0;
    int dividend = number[index] - '0';
    while (dividend < divisor) {
        dividend = dividend * 10 + (number[++index] - '0');
    }
    while (number.size() > index) {
        result += (dividend / divisor) + '0';
        dividend = (dividend % divisor) * 10 + number[++index] - '0';
    }
    if (result.length() == 0) {
        return "0";
    }
    return result;
}

int main() {
    string dividend;
    int divisor;
    cout << "Enter Dividend: ";
    cin >> dividend;
    cout << "Enter Divisor: ";
    cin >> divisor;
    cout << "Quotient is " << divideLargeNumber(dividend, divisor) << endl;
    return 0;
}
