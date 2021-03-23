#include <iostream>
using namespace std;

int mod(int x, int y);

int main(void)
{
    int num1, num2;
    cout << "Finding Mod" << endl;
    cout << "Enter the Number and the Divisor: ";
    cin >> num1 >> num2;

    int result;
    result = mod(num1, num2);
    cout << result << endl;

    return 0;
} 

int mod(int x, int y)
{
    int mod = x % y;
    if (mod < 0) {
        mod += y;
    }
    return mod;
}
