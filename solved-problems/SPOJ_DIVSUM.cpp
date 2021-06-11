#include <iostream>
using namespace std;

const int MAXX = 5e5;
int sum_of_divisors[MAXX];

void divisors_sum() {
    for (int i = 1; i<= MAXX; i++) {
        for (int j = i; j <= MAXX; j += i) {
            sum_of_divisors[j] += i;
        } 
    }
}

int main() {
    divisors_sum();
    int cases;
    cin >> cases;
    while (cases--) {
        int num;
        cin >> num;
        cout << sum_of_divisors[num] - num << endl;
    }
}