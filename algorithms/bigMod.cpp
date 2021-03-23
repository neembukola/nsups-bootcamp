#include <iostream>
using namespace std;

long long bigMod(long long base, long long exp, long long mod);

int main(void)
{
    long long base_inp, exp_inp, mod_inp;
    cout << "Enter Base: ";
    cin >> base_inp;
    cout << "Enter Exp: ";
    cin >> exp_inp;
    cout << "Enter Mod: ";
    cin >> mod_inp;

    long long result = bigMod(base_inp, exp_inp, mod_inp);

    cout << "Expected bigMod = " << result << endl;

    return 0;
}

long long bigMod(long long base, long long exp, long long mod) //O(log(exp))
{
    if (exp == 0) {
        return 1 % mod;
    } 
    
    if (exp % 2 == 0) {
        long long half = bigMod(base, exp / 2, mod);
        return half * half % mod;
    } else {
        return bigMod(base, exp - 1, mod) * base % mod;
    }
}
