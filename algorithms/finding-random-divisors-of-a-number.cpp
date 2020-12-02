#include <iostream>
using namespace std;

void divisors(int n) {
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            int a = i;
            int b = n / i;

            cout << a << endl;

            if (a != b){
                cout << b << endl;
            }
        }
    }
}

int main(void)
{
    int num;
    cin >> num;
    divisors(num);

    return 0;
}
