#include <iostream>
using namespace std;

long long gcd(long long x, long long y);
long long lcm(long long x, long long y);

int main() {
    int num1, num2;
    cout << "Finding LCM" << endl;
    cout << "Enter Two (02) Numbers: ";
    cin >> num1 >> num2;
    cout << "LCM is " << lcm(num1, num2) << endl;
    return 0;
}

// Algorithm: O(log(min(x, y))) - Most_Efficient

long long gcd(long long x, long long y) {
    if (y == 0) {
        return x;
    }
    return gcd(y, x % y); 
}

long long lcm(long long x, long long y) {
    return (x / gcd(x, y)) * y;
}


/*
    gcd(x, y) * lcm(x, y) = x * y;

    we know that,
    gcd(num1, num2) * lcm(num1, num2) = num1  * num2;
    lcm(num1, num2) = (num1 * num2) / gcd(num1, num2);

    to reduce overflow by multiplying num1 and num2,
    we can simply divide a number by gcd(num1, num2) and 
    multipy another number with the previous result.

    now the equation is:
    lcm(num1, num2) = (num1 / gcd(num1, num2)) * num2;
*/
