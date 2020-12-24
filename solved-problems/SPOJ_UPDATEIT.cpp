#include <iostream>
using namespace std;

long long arr[10001];

void prefixSum(int num);

int main()
{
    int testcase;
    cin >> testcase;

    for(int i = 0; i < testcase; i++) {
        int arrElement, update;
        cin >> arrElement >> update;

        for(int i = 0; i < arrElement; i++) {
            arr[i] = 0;
        }

        for(int i = 0; i < update; i++) {
            int left, right, val;
            cin >> left >> right >> val;

            arr[left] = arr[left] + val;
            arr[right + 1] = arr[right + 1] - val;
        }

        prefixSum(arrElement);

        int query;
        cin >> query;

        while(query--) {
            int index;
            cin >> index;
            
            int result = arr[index];
            cout << result << endl;
        }
    }
}

void prefixSum(int num)
{
    for(int i = 0; i < num; i++) {
        arr[i] = arr[i] + arr[i - 1];
    }
}
