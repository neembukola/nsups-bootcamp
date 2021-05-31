#include <iostream>
using namespace std;

int main() {
    string str = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char ch;
    while ( (ch = getchar()) != EOF ) {
        if (ch == ' ') {
            cout << " ";
            continue;
        } else if (ch == '\n') {
            cout << "\n";
            continue;
        }
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == ch) {
                cout << str[i - 1];
                break;
            }
        }
    }
}