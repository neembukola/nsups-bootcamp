#include <iostream>
using namespace std;

int main(void) {
    int a, b, c;
    while (true) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) {
            return 0;
        }
        int sideOne = a * a;
        int sideTwo = b * b;
        int sideThree = c * c;
        if ((sideOne + sideTwo == sideThree) || (sideOne + sideThree == sideTwo) || (sideTwo + sideThree == sideOne)) {
            cout << "right" << endl;
        } else {
            cout << "wrong" << endl;
        }
    }
}