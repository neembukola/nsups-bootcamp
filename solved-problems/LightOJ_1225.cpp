#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {
        string num;
        cin >> num;
        int strLen = num.size(), check = 0;
        for (int k = 0; k < strLen / 2; k++) {
            if (num[k] != num[strLen - k - 1]) {
                check = 1;
                break;
            }
        }
        cout << "Case " << i << ": "; 
        if (check) {
            cout << "No" << endl;
            check = 0;
        } else {
            cout << "Yes" << endl;
        }
    }
}