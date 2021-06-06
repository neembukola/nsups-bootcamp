#include <iostream>
using namespace std;

int gcd(int x, int y);

int main() {
    int num1, num2;
    cout << "Finding GCD" << endl;
    cout << "Enter Two (02) Numbers: ";
    cin >> num1 >> num2;
    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;
    return 0;
}

//Algorithm: Greatest Common Divisor
//Complexity: O(log(min(a, b)) // USE THIS

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    }
    return gcd(y, x % y); 
}



/*

Complexity: O(min(x, y)) // DON'T USE THIS

int GCD(int x, int y) { 
    for(int i = min(x, y); i >= 1; i--) {
        if(x % i == 0 && y % i == 0) {
            return i;
        } 
    }
}

*/
