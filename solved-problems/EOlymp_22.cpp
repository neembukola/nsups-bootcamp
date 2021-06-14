#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int N = 10000;
vector <bool> isPrime(N + 5, true);

void sieve() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 4; i <= N; i += 2) {
        isPrime[i] = false;
    }
    int sqN = sqrt(N);
    for (int i = 3; i <= sqN; i += 2) {
        if (isPrime[i]) {
            for (int j = i * i; j <= N; j += i * 2) {
                isPrime[j] = false;
            }
        }
    }
}

int rev_num(int num) {
    int temp, rev = 0;
    while (num != 0) {
        temp = num % 10;
        rev = rev * 10 + temp;
        num /= 10;
    }
    return rev;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    sieve();
    int count = 0;
    for (int i = num1; i <= num2; i++) {
        int revNum = rev_num(i);
        if (isPrime[i] && isPrime[revNum]) {
            count++;
        }
    }
    cout << count << endl;
}
