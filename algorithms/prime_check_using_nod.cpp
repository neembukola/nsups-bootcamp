#include <iostream>
using namespace std;

#define N 10000
int NOD[N + 1];

void generateNOD();
bool isPrimeUsingNOD(int num);

int main() {
    generateNOD();
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    if (isPrimeUsingNOD(num)) {
        cout << num << " is prime." << endl;
    } else {
        cout << num << " is not prime." << endl;
    }
}

void generateNOD() {
   for(int i = 1; i <= N; i++) {
       for(int j = i; j <= N; j += i) {
           NOD[j]++;
       }
   }
}

bool isPrimeUsingNOD(int num) {
   return NOD[num] == 2;
}
