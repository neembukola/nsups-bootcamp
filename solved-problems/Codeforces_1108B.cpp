#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int num;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + num);
    int num1 = arr[num - 1], num2;
    for (int i = num - 1; i >= 0; i--) {
        if (num1 % arr[i]) {
            num2 = arr[i];
            break;
        }
        if (arr[i] == arr[i - 1]) {
            num2 = arr[i];
            break;
        }
    }
    cout << num1 << " " << num2 << endl;
}