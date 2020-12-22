### Map

```cpp

#include <iostream>
#include <map>
using namespace std;

int main(void)
{
    map <string, int> mp;

    int num;
    cout << "how many string: ";
    cin >> num;

    for(int i = 0; i < num; i++) {
        string str;
        cin >> str;
        mp[str]++;
    }

    cout << "-- Output --" << endl;

    for(auto x: mp) {
        cout << x.first << "  " << x.second << endl;
    }
}

/*
how many string: 6
nsups
nsups
nsups
nsu
nsu
baps-bacs
-- Output --
baps-bacs  1
nsu  2
nsups  3
*/

```
