#include <iostream>
using namespace std;

int main() {
	int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++) {
        int dec;
        cin >> dec;
        int binaryNum[32];
        int loop = 0;
	    while (dec > 0) {
		    binaryNum[loop] = dec % 2;
		    dec = dec / 2;
		    loop++;
	    }
        cout << "Case " << i << ": ";
        int ones = 0;
        for (int j = loop - 1; j >= 0; j--) {
            if (binaryNum[j] == 1) {
                ones++;
            }
        }
        if (ones % 2) {
            cout << "odd" << endl;
        } else {
            cout << "even" << endl; 
        }
    }
}