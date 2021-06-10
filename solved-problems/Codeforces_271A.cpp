#include <iostream>
using namespace std;

void year(int n);

int main() {
    int inp_year;
    cin >> inp_year;
    year(inp_year);
}

void year(int n) {
    int n1, n2, n3, n4;
    bool flag = true;
    do {
        n += 1;
        n1 = n % 10;
        n2 = (n / 10) % 10;
        n3 = (n / 100) % 10;
        n4 = (n / 1000) % 10;
        if (n4 != n3 && n4 != n2 && n4 != n1 && n3 != n2 && n3 != n1 && n2 != n1) {
            flag = false;
        }
    } while (flag); 
    cout << n << endl;
}