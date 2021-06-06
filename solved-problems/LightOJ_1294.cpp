#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {
        long long n, m, sum;
        cin >> n >> m;
        sum = (n / 2) * m;
        cout << "Case " << i << ": " << sum << endl;
    }
}