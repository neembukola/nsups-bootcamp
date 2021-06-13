#include <iostream>
using namespace std;

int main() {
    long long num;
    cin >> num;
    for (long long i = 2; i * i <= num; i++) {
        while (num % (i * i) == 0) {
            num /= i;
        }
    }
    cout << num << endl;
}