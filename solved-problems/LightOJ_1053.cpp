#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {
        int side[3];
        for (int i = 0; i < 3; i++) {
            cin >> side[i];
        }
        sort(side, side + 3);
        int sides = (side[0] * side[0]) + (side[1] * side[1]);
        int hypot = (side[2] * side[2]);
        string ans;
        if (sides == hypot) {
            ans = "yes";
        } else {
            ans = "no";
        }
        cout << "Case " << i << ": " << ans << endl;
    } 
}