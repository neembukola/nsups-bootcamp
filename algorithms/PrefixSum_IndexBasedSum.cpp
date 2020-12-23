#include <iostream>
using namespace std;

int arr[10000];
long long sum[10000];

void generatePrefixSum(int n);
long long getSum(int i, int j);

int main(void)
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << "Enter " << num << " Elements: ";
    for(int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    generatePrefixSum(num);

//    for(int i = 0; i < num; i++) {
//        cout <<  sum[i] << "  ";
//    }

    cout << "Please enter the index numbers: ";

    int left_index, right_index;
    cin >> left_index >> right_index;

    cout << "Sum; from Index " << left_index << " to " << right_index << " is: " << getSum(left_index, right_index) << endl;

    cout << endl;
    return 0;
}

void generatePrefixSum(int n) 
{
    sum[0] = arr[0];

    for(int i = 1; i < n; i++) {
        sum[i] = sum[i - 1] + arr[i];
    }
}

long long getSum(int i, int j)
{
    long long sumTotal;
    sumTotal = sum[j];

    if(i > 0) {
        sumTotal = sumTotal - sum[i - 1];
    }

    return sumTotal;
}


/*

Enter number: 5
Enter 5 Elements: 10 20 20 25 40
Please enter the index numbers: 1 3
Sum; from Index 1 to 3 is: 65

*/
