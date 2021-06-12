#include <iostream>
using namespace std;

int carryCount(int num1, int num2) {
    int carry = 0, carryCr = 0;
    while (num1 > 0 || num2 > 0) {
        if ((num1 % 10) + (num2 % 10) + carry > 9) {
            carryCr++;
            carry = 1;
        } else {
            carry = 0;
        }
        num1 /= 10;
        num2 /= 10;
    }
    return carryCr;
} 

int main() {
    int num1, num2;
    while (cin >> num1 >> num2) {
        if (num1 == 0 && num2 == 0) {
            return 0;
        }
        int check = carryCount(num1, num2);
        if (check == 0) {
            cout << "No carry operation." << endl;
        } else if (check == 1) {
            cout << check << " carry operation." << endl;
        } else {
            cout << check << " carry operations." << endl;
        }
    }
}