#include <iostream>
using namespace std;

const int MAXX = 1e5;
int sum_of_divisors[MAXX];

void divisors_sum();

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << "Sum of Divisors: " << sum_of_divisors[number] << endl;
    return 0;
}

//Algorithm: Divisors Sum of A Number / SOD
//Algorithm: O(sqrt(n))

void divisors_sum() {
    for (int i = 1; i<= MAXX; i++) {
        for (int j = i; j <= MAXX; j += i) {
            sum_of_divisors[j] += i;
        } 
    }
}

/*
Direct Solution
Complexity: O(sqrt(n))

int sumDivisors(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            int a = i;
            int b = n / i;
            count += a;
            if (a != b) {
                count += b;
            }
        }
    }
    return count; 
}
*/
