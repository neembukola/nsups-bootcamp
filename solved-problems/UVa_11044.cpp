#include <iostream>
using namespace std;

int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        int ans = (n / 3) * (m / 3);
        cout << ans << endl;
    } 
}