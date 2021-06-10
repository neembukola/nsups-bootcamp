#include <iostream>
using namespace std;

#define N 10000
int SOD[N + 1];

void generateSOD() {
   for(int i = 1; i <= N; i++) {
       for(int j = i; j <= N; j += i) {
           SOD[j] += i;
       }
   }
}

int main() {
    generateSOD();
    int num;
    while (cin >> num) {
        int factorSum = SOD[num];
        if (factorSum > 1) {
            cout << factorSum - num << endl;
        } else {
            cout << 0 << endl;
        }
    }
}