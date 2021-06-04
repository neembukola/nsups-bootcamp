#include <iostream>
#include <cmath>
using namespace std;

void divisors(int n);

int main() {
    int n;
    cin >> n;
    divisors(n);
    return 0;
}

//Algorithm: Divisors (Ascending Ordered)
//Algorithm: O(sqrt(n))

void divisors(int n) {
    for (int i = 1; i * i <= n; i++) {
        if ((n % i == 0) && (i * i != n)) {
            cout << i << endl;
        }
    }
    for (int i = sqrt(n); i >= 1; i--) {
        if (n % i == 0) {
            int div = n / i;
            cout << div << endl;
        }
    }
}

//Line 19: (i * i != n) [Personal Observation]


/*
void divisors(int n) {
    for (int i = 1; i * i < n; i++) {
        if (n % i == 0) {
            cout << i << endl;
        }
    }
    for (int i = sqrt(n); i >= 1; i--) {
        if (n % i == 0) {
            int div = n / i;
            cout << div << endl;
        }
    }
}
*/
