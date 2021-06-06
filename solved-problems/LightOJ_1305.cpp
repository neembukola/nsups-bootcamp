#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {
        int ax, ay, bx, by, cx, cy, dx, dy;
        cin >> ax >> ay >> bx >> by >> cx >> cy;
        dx = cx - (bx - ax);
        dy = cy - (by - ay);
        int pGram = (ax * (by - cy)) + (bx * (cy - ay)) + (cx * (ay - by));
        if (pGram < 0) {
            pGram *= -1;
        }
        cout << "Case " << i << ": " << dx << " " << dy << " " << pGram << endl;
    }
}