#include <iostream>
using namespace std;

int getModulo(int x, int y);

int main() {
    int num1, num2;
    cout << "Finding Mod" << endl;
    cout << "Enter the Number and the Divisor: ";
    cin >> num1 >> num2;
    cout << "Modulo: " << getModulo(num1, num2) << endl;
    return 0;
} 

//Algorithm: Get Modulo

int getModulo(int x, int y) {
    int mod = x % y;
    if (mod < 0) {
        mod += y;
    }
    return mod;
}



/*

(a + b) % m = c % m = c
given m, a and c, find b
a + b % m = c % m
b = (c - a) % m
b should be non-neg and less than m -- only one valid answer

*/
