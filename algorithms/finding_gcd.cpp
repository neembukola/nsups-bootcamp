#include <iostream>
using namespace std;

int gcd(int x, int y);

int main(void)
{
    int num1, num2;
    cout << "Finding GCD" << endl;
    cout << "Enter Two (02) Numbers: ";
    cin >> num1 >> num2;

    int result;
    result = gcd(num1, num2);
    cout << result << endl;

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

    //O(min(a, b))
    int answer;
    for(int i = 1; i <= max(a, b); i++) {
        if(x % i == 0  &&  y % i == 0) {
            answer = i;
        }
    }
    return answer

    ----- * ----

    //O(max(a, b))
    int answer;
    for(int i = 1; i <= max(a, b); i++) {
        if(x % i == 0  &&  y % i == 0) {
            answer = i;
        }
    }
    return answer

 */
