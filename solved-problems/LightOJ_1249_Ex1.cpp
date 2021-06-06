#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {
        int student;
        cin >> student;
        string name[student];
        int vol[student], total = 0;
        int len, wid, hig;
        for (int i = 0; i < student; i++) {
            cin >> name[i];
            cin >> len >> wid >> hig;
            vol[i] = len * wid * hig;
            total += vol[i];
        }
        int eq = total / student;
        int minInd = 0, maxInd = 0;
        for (int i = 0; i < student; i++) {
            if (vol[i] > eq) {
                maxInd = i;
                continue;
            }
            if (vol[i] < eq) {
                minInd = i;
                continue;
            }
        }
        cout << "Case " << i << ": ";
        if (minInd == maxInd) {
            cout << "no thief" << endl;
        } else {
            cout << name[maxInd] << " took chocolate from " << name[minInd] << endl; 
        }
    }
}