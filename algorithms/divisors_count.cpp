#include <iostream>
using namespace std;

int countDivisors(int n);

int main() {
    int n, total;
    cin >> n;
    total = countDivisors(n);
    cout << "Total Divisors: " << total << endl;
    return 0;
}

//Algorithm: Divisors (Total/Count)
//Algorithm: O(sqrt(n))

int countDivisors(int n) {
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
