#include <iostream>
#include <cmath>
using namespace std;

void divisors(int n);

int main() {
    int n;
    cin >> n;
    divisors(n);
}

void divisors(int n) {
    for (int i = 1; i * i < n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    for (int i = sqrt(n); i >= 1; i--) {
        if (n % i == 0) {
            int div = n / i;
            cout << div << " ";
        }
    }
}