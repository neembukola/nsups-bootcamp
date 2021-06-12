#include <iostream>
#include <cstdlib>
using namespace std;

long long gcd(long long x, long long y) {
    if (y == 0) {
        return x;
    }
    return gcd(y, x % y); 
}

int main() {
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {
        long long ax, ay, bx, by;
        cin >> ax >> ay >> bx >> by;
        long long x_ax = abs(ax - bx);
        long long y_ax = abs(ay - by);
        cout << "Case " << i << ": " << gcd(x_ax, y_ax) + 1 << endl;
    }
}