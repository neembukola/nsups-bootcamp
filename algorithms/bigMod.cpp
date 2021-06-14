#include <iostream>
using namespace std;

long long bigMod(long long base, long long exp, long long mod);

int main() {
    long long base_inp, exp_inp, mod_inp;
    cout << "Enter Base: ";
    cin >> base_inp;
    cout << "Enter Exp: ";
    cin >> exp_inp;
    cout << "Enter Mod: ";
    cin >> mod_inp;
    cout << "Expected bigMod = " << bigMod(base_inp, exp_inp, mod_inp) << endl;
    return 0;
}

//Algorithm: bigMod
//Complexity: O(log(exp))

long long bigMod(long long base, long long exp, long long mod) {
    if (exp == 0) {
        return 1 % mod;
    }
    if (exp == 1) {
        return base % mod;
    }
    if (exp % 2 == 0) {
        long long half = bigMod(base, exp / 2, mod);
        return (half * half) % mod;
    } else {
        return (base % mod) * bigMod(base, exp - 1, mod);
    }
}


/*
iterative_funtion to generate bigMod

long long bigMod (long long base, long long exp, long long mod) { // returns (base^exp) % mod
    long long res = 1 % mod, x = base % mod;
    while (exp > 0) {
        if ((exp & 1) > 0) {
            res = (res * x) % mod;
        }
        x = (x * x) % mod; 
        exp >>= 1;
    }
    return res;
}

Note: “(exp & 1) > 0” is same as "exp % 2 == 1” 
and “exp >>= 1” is same ase “exp = exp / 2”, 
these are called bitwise operations, which are generally faster.

*/
