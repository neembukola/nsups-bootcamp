#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n == 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    while (cin >> num) {
        if (isPrime(num)) {
            int temp = num, revNum = 0, div;
            while (temp != 0) {
                div = temp % 10;
                revNum = (revNum * 10) + div;
                temp /= 10;
            }
            if (revNum == num) {
                cout << num << " is prime." << endl;
            } else if (isPrime(revNum)) {
                cout << num << " is emirp." << endl;
            } else {
                cout << num << " is prime." << endl;
            }
        } else {
            cout << num << " is not prime." << endl;
        }
    }
}