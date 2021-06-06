#include <iostream>
using namespace std;

#define N 10000
int SOD[N + 1];

void generateSOD();
bool isPrimeUsingSOD(int num);

int main() {
    generateSOD();
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    if (isPrimeUsingSOD(num)) {
        cout << num << " is prime." << endl;
    } else {
        cout << num << " is not prime." << endl;
    }
}

void generateSOD() {
   for(int i = 1; i <= N; i++) {
       for(int j = i; j <= N; j += i) {
           SOD[j] += i;
       }
   }
}

bool isPrimeUsingSOD(int num) {
   return SOD[num] == num + 1;
}
