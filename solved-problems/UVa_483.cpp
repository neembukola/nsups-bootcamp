#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str;
    while (getline(cin, str)) {
        stringstream sstr(str);
        bool check = true;
        while (sstr >> str) {
            if (!check) {
                cout << " ";
            }
            check = false;
            for (int i = str.size() - 1; i >= 0; i--) {
                cout << str[i];
            }
        }
        cout << endl;
    }
}