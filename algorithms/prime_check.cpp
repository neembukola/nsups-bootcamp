#include <iostream>
using namespace std;

bool isPrime(int n); 

int main(void)
{
    int num;
    cin >> num;
    bool checkPrime = isPrime(num);

    if(checkPrime){
        cout << num << " is Prime." << endl;
    } else{
        cout << num << " is not Prime." << endl;
    }

    return 0;
}

bool isPrime(int n) { // O(sqrt(n))
    if(n == 1) {
        return false;
    }
    if(n == 2) {
        return true;
    }
    for(int i = 2; i * i <= n; i++) {
        if( n % i == 0) {
            return false;
        }
    }
    return true;
}
