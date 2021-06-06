#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {
        int student;
        cin >> student;
        string name[student];
        int vol[student];
        int len, wid, hig;
        for (int i = 0; i < student; i++) {
            cin >> name[i];
            cin >> len >> wid >> hig;
            vol[i] = len * wid * hig;
        }
        int min_vol = vol[0], max_vol = vol[0];
        int minInd = 0, maxInd = 0;
        for (int k = 1; k < student; k++) {
            if (min_vol > vol[k]) {
                min_vol = vol[k];
                minInd = k;
            }
            if (max_vol < vol[k]) {
                max_vol = vol[k];
                maxInd = k;
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