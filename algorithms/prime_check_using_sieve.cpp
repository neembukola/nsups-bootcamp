#include <iostream>
#define N 30
using namespace std;

bool isPrime[N + 1];

void sieve();

int main(void)
{
    sieve();

    for (int i = 0; i <= 30; i++) {
        if (isPrime[i] == true) {
            cout << i << " ";
        }
    } 

    cout << endl;
}

void sieve()
{
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

//sample_code 
//will be updated later