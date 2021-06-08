#include <iostream>
using namespace std;

long long power(long long base, long long exp);

int main() {
    long long base_inp, exp_inp;
    cout << "Enter Base: ";
    cin >> base_inp;
    cout << "Enter Exp: ";
    cin >> exp_inp;
    long long result = power(base_inp, exp_inp);
    cout << base_inp << " to the power " << exp_inp << " is " << result << endl;
}

//Algorithm: Power Calculation
//Complexity: O(log(exp))

long long power(long long base, long long exp) {
    if (exp == 0) {
        return 1;
    } 
    if (exp % 2 == 0) {
        long long half = power(base, exp / 2);
        return half * half;
    } else {
        return power(base, exp - 1) * base;
    }
}



/*
7^9
7^8 7
7^4 7^4 7
7^2 7^2 7^4 7
7^1 7^1 7^2 7^4 7
*/
