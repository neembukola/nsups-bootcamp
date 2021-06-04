#include <iostream>
using namespace std;

void divisors(int n);

int main() {
    int n;
    cin >> n;
    divisors(n);
    return 0; 
}

//Algorithm

void divisors(int n) {
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            int a = i;
            int b = n / i;
            cout << a << endl;
            if (a != b) {
                cout << b << endl;
            }
        }
    }
}
