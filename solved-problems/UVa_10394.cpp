#include <iostream>
#include <vector>
using namespace std;

#define N 20000000
bool isPrime[N];

void sieve() {
    for (int i = 0; i <= N; i++) {
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= N; i++) {
        if (isPrime[i] == true) {
            for (int j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    sieve();
    vector <int> vec;
    vec.push_back(0);
    int arr = 3;
    for (int i = 5; i <= 20000000; i++) {
        if (isPrime[i]) {
            if (i - arr == 2) {
                vec.push_back(i);
            }
            arr = i;
        }
    }
    int num;
    while (cin >> num) {
        cout << "(" << vec[num] - 2 << ", " << vec[num] << ")" << endl;
    }
}