#include <iostream>
using namespace std;

int arr[220000];
long long sum[220000];

void PrefixSum(int n);
long long getSum(int i, int j, int n);

int main(void)
{
    int num;
    cin >> num;

    for(int i = num - 1; i >= 0; i--) {
        cin >> arr[i];
    }

    PrefixSum(num);

    int test;
    cin >> test;

    for(int i = 0; i < test; i++) {
        int query;
        cin >> query;

        if(query == 1) {
            int left, right;
            cin >> left >> right;
            cout << getSum(left, right, num) << endl;
        } else if(query == 2) {
            int x;
            cin >> x;
            arr[num] = x;
            sum[num] = x + sum[num - 1];
            num++;
        }
    }

    return 0;
}

void PrefixSum(int n) 
{
    sum[0] = arr[0];

    for(int i = 1; i < n; i++) {
        sum[i] = sum[i - 1] + arr[i];
    }
}

long long getSum(int i, int j, int n)
{
    long long sumTotal;
    sumTotal = sum[n - i];

    if(j < n) {
        sumTotal = sumTotal - sum[n - (j + 1)];
    }

    return sumTotal;
}
