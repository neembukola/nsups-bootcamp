#include <iostream>
using namespace std;
 
int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int prob;
        cin >> prob;
        if (prob < 10) {
            cout << 0 << " " << prob << endl;
        } else {
            cout << prob - 10 << " " << 10 << endl;
        }
    }
}
