#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        while (m--) {
            string ind;
            cin >> ind;
            if (ind == "S") {
                int d;
                cin >> d;
                for (int i = 0; i < n; i++) {
                    arr[i] += d;
                }
            } else if (ind == "M") {
                int d;
                cin >> d;
                for (int i = 0; i < n; i++) {
                    arr[i] *= d;
                }
            } else if (ind == "D") {
                int k;
                cin >> k;
                for (int i = 0; i < n; i++) {
                    arr[i] /= k;
                }
            } else if (ind == "P") {
                int y, z;
                cin >> y >> z;
                int temp = arr[y];
                arr[y] = arr[z];
                arr[z] = temp;
            } else if (ind == "R") {
                reverse(arr, arr + n);
            }
        }
        cout << "Case " << i << ":" << endl;
        for (int i = 0; i < n; i++) {
            if (i == n - 1) {
                cout << arr[i];
            } else {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
}