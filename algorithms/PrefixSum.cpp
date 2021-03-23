#include <iostream>
using namespace std;

int arr[1000];
long long sum[1000];

void generatePrefixSum(int n);

int main(void)
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << "Enter " << num << " Elements: ";
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    generatePrefixSum(num);

    for (int i = 0; i < num; i++) {
        cout <<  sum[i] << "  ";
    }

    cout << endl;
    return 0;
}

void generatePrefixSum(int n) 
{
    sum[0] = arr[0];

    for (int i = 1; i < n; i++) {
        sum[i] = sum[i - 1] + arr[i];
    }
}





/*

Enter number: 5
Enter 5 Elements: 10 15 20 25 30
10  25  45  70  100

*/
