#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {
        int init, lift;
        cin >> init >> lift;
        int move = 3 * 3 + 5 * 2;
        int time;
        if (init > lift) {
            time = ((init - lift) + init) * 4 + move;
        } else {
            time = lift * 4 + move;
        }
        cout << "Case " << i << ": " << time << endl;
    }
}
