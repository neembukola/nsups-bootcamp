#include <iostream>
using namespace std;

#define N 12
int NOD[N + 1];

void generateNOD();

int main() {
    generateNOD();
    for (int i = 1; i <= N; i++) {
        cout << "'Number of Divisor' of " << i << " is " << NOD[i] << endl;
    }
    cout << endl;
}

//Algorithm:    NOD (Number of Divisors)
//Complexity:   O(N log(N))

void generateNOD() {
   for(int i = 1; i <= N; i++) {
       for(int j = i; j <= N; j += i) {
           NOD[j]++;
       }
   }
}
