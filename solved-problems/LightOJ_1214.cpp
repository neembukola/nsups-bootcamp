#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {
        string num1;
        long long num2;
        cin >> num1 >> num2;
        int strLen = num1.size();
        int start;
        if (num1[0] == '-') {
            start = 1;
        } else {
            start = 0;
        }
        if (num2 < 0) {
            num2 = num2 * (-1);
        }
        long long init = 0;
        for (int k = start; k < strLen; k++) {
            init = (num1[k] - '0') + init * 10;
            init = init % num2;
        }
        if (init) {
            cout << "Case " << i << ": not divisible" << endl;
        } else {
            cout << "Case " << i << ": divisible" << endl;
        }
    }
}