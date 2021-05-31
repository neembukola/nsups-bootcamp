#include <iostream>
using namespace std;

int main() {
    int num;
    while (cin >> num) {
        int result = num + num / 2;
        cout << result << endl;
    }
}