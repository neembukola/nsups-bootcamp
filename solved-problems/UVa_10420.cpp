#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    string arr[cases];
    for (int i = 0; i < cases; i++) {
        string desh, name;
        cin >> desh;
        getline(cin, name);
        arr[i] = desh;
    }
    sort (arr, arr + cases);
    int deshCount = 0;
    for (int i = 0; i < cases; i++) {
        deshCount++;
        if (arr[i] != arr[i + 1]) {
            cout << arr[i] << " " << deshCount << endl;
            deshCount = 0;
        }
    }
}