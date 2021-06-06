#include <iostream>
using namespace std;

#define N 12
int SOD[N + 1];

void generateSOD();

int main() {
    generateSOD();
    for (int i = 1; i <= N; i++) {
        cout << "'Sum of Divisor' of " << i << " is " << SOD[i] << endl;
    }
    cout << endl;
}

//Algorithm:    SOD (Sum of Divisors)
//Complexity:   O(N log(N))

void generateSOD() {
   for(int i = 1; i <= N; i++) {
       for(int j = i; j <= N; j += i) {
           SOD[j] += i;
       }
   }
}
