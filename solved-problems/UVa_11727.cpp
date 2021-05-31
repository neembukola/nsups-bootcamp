#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {
        int one, two, three;
        cin >> one >> two >> three;
        if ((one > two && one < three) || (one < two && one > three)) {
            cout << "Case " << i << ": " << one << endl;
        } else if ((two > three && two < one) || (two < three && two > one)) {
            cout << "Case " << i << ": " << two << endl;
        } else {
            cout << "Case " << i << ": " << three << endl;
        }
    }
}