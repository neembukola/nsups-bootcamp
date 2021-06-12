#include <iostream>
using namespace std;

long long gcd(long long x, long long y) {
    if (y == 0) {
        return x;
    }
    return gcd(y, x % y); 
}

long long lcm(long long x, long long y) {
    return (x / gcd(x, y)) * y;
}

int main() {
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {
        long long a, b, c, l;
        cin >> a >> b >> l;
        long long x = lcm(a, b);
        cout << "Case " << i << ": ";
        if (l % x) {
            cout << "impossible" << endl;
        } else {
            long long c = l / x;
            long long g = gcd(c, x); 
            while (g != 1) {
                c *= g;
                x /= g;
                g = gcd(c, x);
            }
            cout << c << endl;
        }
    }
}

//confused_xD