#include <iostream>
using namespace std;

int main() {
    int len;
    cin >> len;
    string num;
    cin >> num;
    for (int i = 0; i < len; i++) {
        if (num[i] != '4' && num[i] != '7') {
            cout << "NO" << endl;
            return 0;
        }
    }
    int sumFirst = 0, sumSecond = 0;
    for (int i = 0; i < len / 2; i++) {
        sumFirst += num[i];
    }
    for (int i = len - 1; i > (len / 2) - 1; i--) {
        sumSecond += num[i];
    }
    if (sumFirst == sumSecond) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
