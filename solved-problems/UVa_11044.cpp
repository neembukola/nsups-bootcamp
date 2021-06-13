#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int n, m;
        cin >> n >> m;
        cout << (n / 3) * (m / 3) << endl;
    }
}