#include <iostream>
using namespace std;

const int MAXX = 1e5;
int sum_of_divisors[MAXX];

void divisors_sum();

int main(void)
{
    int testcase;
    cout << "Enter Testcase: ";
    cin >> testcase;

    divisors_sum();

    while (testcase--) {
        int number;
        cout << "Enter an integer: ";
        cin >> number;

        cout << "Sum of Divisors: " << sum_of_divisors[number] << endl;
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



//O(n log(n))

/*
//excluding testcase

#include <iostream>
using namespace std;

const int MAXX = 1e5;
int sum_of_divisors[MAXX];

void divisors_sum(int n);

int main(void)
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    divisors_sum(number);
    cout << "Sum of Divisors: " << sum_of_divisors[number] << endl;

    return 0;
}

void divisors_sum(int n)
{
    for (int i = 1; i<= n; i++) {
        for (int j = i; j <= n; j += i) {
            sum_of_divisors[j] += i;
        }
    }
}

*/
