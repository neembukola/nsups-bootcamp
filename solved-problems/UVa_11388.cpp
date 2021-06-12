#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int num1, num2;
        cin >> num1 >> num2;
        if (num2 % num1) {
            cout << -1 << endl;
        } else {
            cout << num1 << " " << num2 << endl;
        }
    }
}