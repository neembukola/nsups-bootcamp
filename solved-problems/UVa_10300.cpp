#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int farmer;
        cin >> farmer;
        int budget = 0;
        while (farmer--) {
            int yard, animal, env;
            cin >> yard >> animal >> env;
            budget += yard * env;
        }
        cout << budget << endl;
    }
}