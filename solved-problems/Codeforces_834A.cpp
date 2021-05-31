#include <iostream>
using namespace std;

int main() {
    string c_w = "^>v<", cc_w = "^<v>"; 
    char st, ed;
    int cnt, cw, ccw;
    cin >> st >> ed >> cnt;
    for (int i = 0; i < c_w.size(); i++) {
        if (st == c_w[i]) {
            cw = i;
        }
        if (st == cc_w[i]) {
            ccw = i;
        }
    }
    cw = (cw + cnt) % 4;
    ccw = (ccw + cnt) % 4;
    if (c_w[cw] == ed && cc_w[ccw] != ed) {
        cout << "cw" << endl;
    } else if (cc_w[ccw] == ed && c_w[cw] != ed) {
        cout << "ccw" << endl;
    } else {
        cout << "undefined" << endl;
    }
}