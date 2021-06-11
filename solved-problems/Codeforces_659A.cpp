#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    if (b < 0) {
        b = n - ((b * -1) % n);
    }
    if (b == 0) {
        cout << a << endl;
    } else if (a + b <= n) {
        cout << a + b << endl;
    } else {
        int ans = (a + (b % n)) % n;
        if (ans == 0) {
            cout << n << endl;
        } else {
            cout << ans << endl;
        }
    }
}
