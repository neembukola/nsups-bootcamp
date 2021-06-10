#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2; 
        int test;
        cin >> test;
        cout << "Case " << i << ":" << endl;
        while (test--) {
            int x, y;
            cin >> x >> y;
            if ((x >= x1 && x <= x2) && (y >= y1 && y <= y2)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
}
