### Basic Vector

```cpp

#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector <int> v;
    v.push_back(45);
    v.push_back(90);
    v.push_back(70);

    /*
    for(auto x: v) {
        cout << x << endl;
    } 
    */

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}

```

### Pair 

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair <int, int> a, pair <int, int> b) {
    if(a.first == b.first) {
        return a.second > b.second;
    } else {
        return a.first < b.first;
    }
}

int main(void)
{
    vector< pair <int, int> > vec;

    vec.push_back({2, 4});
    vec.push_back({2, 3});
    vec.push_back({3, 5});
    vec.push_back({3, 9});
    vec.push_back({5, 2});
    vec.push_back({5, 6});
    vec.push_back({5, 12});

    /*
    Ext. Zero
    sort(vec.begin(), vec.end());
    */

    //Ext. One
    sort(vec.begin(), vec.end(), comp);

    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i].first << " " << vec[i].second << endl;
    }

    return 0;
}

/*
Output (Ext. Zero)

2 3
2 4
3 5
3 9
5 2
5 6
5 12
*/

/*
Output (Ext. One)

2 4
2 3
3 9
3 5
5 12
5 6
5 2
*/
```

### Basic Set

```cpp
#include <iostream>
#include <set>
using namespace std;

int main(void)
{
    set <int> st;

    st.insert(50);
    st.insert(55);
    st.insert(62);
    st.insert(68);
    st.insert(82);
    st.insert(95);

    for(auto x: st) {
        cout << x << endl;
    }

    return 0;
}

/*
50 55 62 68 82 95
*/
```

### Set (Search)

```cpp

#include <iostream>
#include <set>
using namespace std;

int main(void)
{
    set <int> st;

    st.insert(50);
    st.insert(55);
    st.insert(62);
    st.insert(68);
    st.insert(82);
    st.insert(95);

    int num;
    cout << "Enter Number: ";
    cin >> num;

    if(st.find(num) != st.end()) {
        cout << "Yes, Found!" << endl;
    } else {
        cout << "No, It's not here." << endl;
    }

    return 0;
}

/*
Enter Number: 55
Yes, Found!
*/

/*
Enter Number: 57
No, It's not here.
*/
```

### 

```cpp



```

### 

```cpp



```

### 

```cpp



```

### 

```cpp



```
