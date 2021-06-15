#include <iostream>
#include <cmath>
using namespace std;

void divisors(int n);

int main() {
    int n;
    cin >> n;
    divisors(n);
    return 0;
}

//Algorithm: Divisors (Ascending Ordered)
//Algorithm: O(sqrt(n))

void divisors(int n) {
    for (int i = 1; i * i < n; i++) {
        if (n % i == 0) {
            cout << i << endl;
        }
    }
    for (int i = sqrt(n); i >= 1; i--) {
        if (n % i == 0) {
            int div = n / i;
            cout << div << endl;
        }
    }
}

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <long long> divs;

void divisors(long long num) {
    for (long long i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            long long j = num / i;
            divs.push_back(i);
            if (i != j) {
                divs.push_back(j);
            }
        }
    }
    sort(divs.begin(), divs.end());
}

int main() {
    divisors(124);
    for (int i = 0; i < divs.size(); i++) {
        cout << divs[i] << " ";
    }
    cout << endl;
}
*/

/*
void divisors(int n) {
    for (int i = 1; i * i <= n; i++) {
        if ((n % i == 0) && (i * i != n)) {
            cout << i << endl;
        }
    }
    for (int i = sqrt(n); i >= 1; i--) {
        if (n % i == 0) {
            int div = n / i;
            cout << div << endl;
        }
    }
}

Line 34: (i * i != n) [Personal Observation]
if the loop is assigned with i * i <= n; instead of i * i < n;
*/
