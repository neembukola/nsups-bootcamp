#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

const int N = 2e8;

vector <int> primes;
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

    primes.push_back(2);
    for (int i = 3; i <= N; i += 2) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
}


int nod[N + 5];
// generate nod for all numbers from 1 to N

void numberOfDivisors() {
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j += i) {
            nod[j] ++;
        }
    }
    for (int i = 1; i <= 10; i++) {
        cout << i << " " << nod[i] << "\n";
    }
}

int sod[N + 5];
// generate sod for all numbers from 1 to N

void sumOfDivisors() {
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j += i) {
            sod[j] += i;
        }
    }
    for (int i = 1; i <= 10; i++) {
        cout << i << " " << sod[i] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    return 0;
}
