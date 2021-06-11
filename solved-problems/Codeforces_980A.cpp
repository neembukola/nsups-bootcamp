#include <iostream>
using namespace std;

int main() {
    string necklace;
    cin >> necklace;
    int link = 0, pearl = 0;
    for (int i = 0; i < necklace.size(); i++) {
        if (necklace[i] == '-') {
            link++;
        } 
        if (necklace[i] == 'o') {
            pearl++;
        }
    }
    if (link == 0 || pearl == 0 || (link % pearl) == 0) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}
