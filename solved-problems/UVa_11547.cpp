#include <iostream>
using namespace std;

int tensDigit(int num) {
    num = (num % 100) / 10;
    return num;
}

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int num;
        cin >> num;
        int calc;
        calc = ((num * 567) / 9) + 7492;
        calc = ((calc * 235) / 47) - 498;
        cout << abs(tensDigit(calc)) << endl;
    }
}