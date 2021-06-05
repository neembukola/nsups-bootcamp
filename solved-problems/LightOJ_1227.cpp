#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {
        int egg, limEgg, limGm;
        cin >> egg >> limEgg >> limGm;
        int weight[egg], countGm = 0, wLimit = 0;
        for (int e = 0; e < egg; e++) {
            cin >> weight[e];
            countGm += weight[e];
            if (countGm <= limGm) {
                wLimit++;
            }
        }
        cout << "Case " << i << ": ";
        if (limEgg < wLimit) {
            cout << limEgg << endl;
        } else {
            cout << wLimit << endl;
        }
    }
}