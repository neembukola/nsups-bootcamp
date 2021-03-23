#include <iostream>
using namespace std;

int countDivisors(int n);

int main(void)
{
    int num, total;
    cin >> num;
    total = countDivisors(num);
    cout << "Total Divisors: " << total << endl;

    return 0;
}

int countDivisors(int n) 
{
    int count = 0;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            int a = i;
            int b = n / i;

            count++;

            if (a != b) {
                count++;
            }
        }
    }

    return count; 
}


// O(sqrt(n))