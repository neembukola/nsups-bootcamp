#include <iostream>
using namespace std;

int main() {
    int n, m, z;
    cin >> n >> m >> z;
    int kill = 0;
    int time = min(n, m);
    for (int i = time; i <= z; i++) {
        if (!(i % n) && !(i % m)) {
            kill++;
        }
    }
    cout << kill << endl;
}