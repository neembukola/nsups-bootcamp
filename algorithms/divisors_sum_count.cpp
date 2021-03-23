#include <iostream>
using namespace std;

const int MAXX = 1e5;
int sum_of_divisors[MAXX], num_of_divisors[MAXX];

void divisors_sum();
void divisors_count();

int main(void)
{
    int testcase;
    cout << "Enter Testcase: ";
    cin >> testcase;

    divisors_sum();
    divisors_count();

    while (testcase--) {
        int number;
        cout << "Enter an integer: ";
        cin >> number;

        cout << "Sum of Divisors: " << sum_of_divisors[number] << endl;
        cout << "Number of Divisors: " << num_of_divisors[number] << endl;
    }

    return 0;
}

void divisors_sum()
{
    for (int i = 1; i<= MAXX; i++) {
        for (int j = i; j <= MAXX; j += i) {
            sum_of_divisors[j] += i; 
        }
    }
}

void divisors_count()
{
    for (int i = 1; i<= MAXX; i++) {
        for (int j = i; j <= MAXX; j += i) {
            num_of_divisors[j]++;
        }
    }
    
}


//  divisors_sum:   O(n log(n))
//  divisors_count: O(n log(n))