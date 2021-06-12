#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    }
    return gcd(y, x % y); 
}

int main() {
    int cases;
    cin >> cases;
    cin.ignore();
    int numArr[101];
    while (cases--) {
        string num;
        getline(cin, num);
        int count = 0, max_gcd = 0;
        stringstream strNum(num);
        while (strNum >> numArr[count++]);
        count--;
        for (int i = 0; i < count; i++) {
            for (int j = i + 1; j < count; j++) {
                max_gcd = max(max_gcd, gcd(numArr[i], numArr[j]));
            }
        }
        cout << max_gcd << endl;
    }
}