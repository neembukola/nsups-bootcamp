#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {
        int std;
        cin >> std;
        int dust, total= 0;
        while (std--) {
            cin >> dust;
            if (dust > 0) {
                total += dust;
            }
        }
        cout << "Case " << i << ": " << total << endl;
    } 
}