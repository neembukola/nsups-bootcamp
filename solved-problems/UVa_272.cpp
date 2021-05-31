#include <iostream>
using namespace std;

int main() {
    string line;
    int indic = 0;
    while (getline(cin, line)) {
        int lineLength = line.size();
        for (int i = 0; i < lineLength; i++) {
            if (line[i] == '\"') {
                if (indic == 0) {
                    cout << "``";
                    indic = 1;
                } else {
                    cout << "''";
                    indic = 0;
                }
            } else {
                cout << line[i];
            }
        }
        cout << endl;
    }
}