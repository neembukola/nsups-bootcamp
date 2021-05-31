#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int totalDiv = 0;
    while (n--) {
        int t;
        cin >> t;
        if (t % k == 0) {
            totalDiv++;
        }
    }
    cout << totalDiv << endl;
}