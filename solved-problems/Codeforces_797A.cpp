#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector <int> vec;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            vec.push_back(i);
            n /= i;
        }
    }
    if (n != 1) {
        vec.push_back(n);
    }
    if (vec.size() < k) {
        cout << "-1" << endl;
    } else {
        for (int i = 0; i < k - 1; i++) {
            cout << vec[i] << " ";
        }
        int x = 1;
        for (int i = k - 1; i < vec.size(); i++) {
            x *= vec[i];
        }
        cout << x << endl;
    }
}