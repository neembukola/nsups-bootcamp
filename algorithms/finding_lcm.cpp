#include <iostream>
using namespace std;

int gcd(int x, int y);

int main(void)
{
    int num1, num2;
    cout << "Finding LCM" << endl;
    cout << "Enter Two (02) Numbers: ";
    cin >> num1 >> num2;

    int result;
    result = (num1 / gcd(num1, num2)) * num2;
    cout << "LCM is " << result << endl;

    return 0;
}

//O(log(min(x, y))) - Most_Efficient
int gcd(int x, int y)
{
    if(y == 0) {
        return x;
    }
    return gcd(y, x% y);
}

/*
    we know that,
    gcd(num1, num2) * lcm(num1, num2) = num1  * num2;
    lcm(num1, num2) = (num1 * num2) / gcd(num1, num2);

    to reduce overflow by multiplying num1 and num2,
    we can simply divide a number by gcd(num1, num2) and 
    multipy another number with the previous result.

    now the equation is:
    lcm(num1, num2) = (num1 / gcd(num1, num2)) * num2;
*/  
