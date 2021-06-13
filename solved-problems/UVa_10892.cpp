#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    }
    return gcd(y, x % y); 
}

int lcm(int x, int y) {
    return (x / gcd(x, y)) * y;
}

int main() {
    int num;
    while ((cin >> num), num) {
        int divArr[100005], total = 0;
        for (int i = 1; i <= num / i; i++) {
            if (num % i) {
                continue;
            } else {
                divArr[total++] = i;
                int temp = num / i;
                if (temp != i) {
                    divArr[total++] = temp;
                }
            }
        }
        sort(divArr, divArr + total);
        int ans = 0;
        for (int i = 0; i < total; i++) {
            for (int j = i; j < total; j++) {
                int a = divArr[i];
                int b = divArr[j];
                if (lcm(a, b) == num) {
                    ans++;
                }
            }
        }
        cout << num << " " << ans << endl;
    }
}