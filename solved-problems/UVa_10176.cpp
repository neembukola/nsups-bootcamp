#include <iostream>
using namespace std;

int main() {
    string bin;
    while (cin >> bin) {
        int rem = 0;
        for (int i = 0; i < bin.size(); i++) {
            if (bin[i] == '#') {
                if (rem == 0) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            } else {
                rem = ((bin[i] - '0') + (rem << 1)) % 131071;
            }
        }
    }
}