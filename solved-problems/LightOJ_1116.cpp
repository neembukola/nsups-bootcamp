#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {
        long long w;
        cin >> w;
        cout << "Case " << i << ": ";
        if (w % 2) {
            cout << "Impossible" << endl;
        } else {
            long long j;
            for (j = 2; ; j += 2) {
                if ((w % j == 0) && ((w / j) % 2)) {
                    break;
                }
            }
            cout << w / j << " " << j << endl;
        }
    } 
}