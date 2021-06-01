#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {
        double rad;
        cin >> rad;
        double square = (rad * 2) * (rad * 2);
        double circle = (2 * acos(0.0)) * (rad * rad);
        double blue = square - circle;
        cout << "Case " << i << ": " << fixed << setprecision(2) << blue << endl;
    } 
}