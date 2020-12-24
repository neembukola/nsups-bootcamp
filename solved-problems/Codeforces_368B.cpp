//Problem Title: Sereja and Suffixes
//Problem Link: https://codeforces.com/contest/368/problem/B


#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int num, loop;
    cin >> num >> loop;

    vector <int> vec(num);
    vector <int> distInt(num);
    set <int> st;

    for(int i = 0; i < num; i++) {
        cin >> vec[i];
    }

    for(int i = num - 1; i >= 0; i--) {
        st.insert(vec[i]);
        distInt[i] = st.size();
    }

    for(int i = 0; i < loop; i++) {
        int ind;
        cin >> ind;
        cout << distInt[ind - 1] << endl;
    }
}
