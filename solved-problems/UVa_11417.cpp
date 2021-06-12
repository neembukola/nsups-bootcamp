#include <iostream>
using namespace std;

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    }
    return gcd(y, x % y); 
}

int res(int num) {
    int g = 0;
    for (int i = 1; i < num; i++) {
        for (int j = i + 1; j <= num; j++) {
            g += gcd(i, j);
        }
    }
    return g;
}

int main() {
    int num;
    while ((cin >> num), num) {
        cout << res(num) << endl;
    }
}