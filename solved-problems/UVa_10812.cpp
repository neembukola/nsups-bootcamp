#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int tot, dif;
        cin >> tot >> dif;
        if (tot < dif) {
            cout << "impossible" << endl;
        } else {
            int small = (tot - dif) / 2;
            int large = dif + small;
            if ((large + small == tot) && (large - small == dif)) {
                cout << large << " " << small << endl;
            } else {
                cout << "impossible" << endl;
            }
        }
    }
}