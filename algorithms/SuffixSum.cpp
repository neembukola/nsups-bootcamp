#include <iostream>
using namespace std; 

int arr[1000];
long long sum[1000];

void generateSuffixSum(int n);
long long getSuffixSum(int i, int j, int n);

int main(void)
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << "Enter " << num << " Elements: ";
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    cout << "Suffix Sum: ";

    generateSuffixSum(num);

    for (int i = 0; i < num; i++) {
        cout <<  sum[i] << "  ";
    }

    cout << endl;

    int left, right;
    
    cout << "Enter Left and Right Index: ";
    cin >> left >> right;

    int result;
    result = getSuffixSum(left, right, num);
    cout << "Range Based Suffix Sum: " << result << endl;

    cout << endl;
    return 0;
}

void generateSuffixSum(int n) 
{
    sum[n - 1] = arr[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        sum[i] = sum[i + 1] + arr[i];
    }
}

long long getSuffixSum(int i, int j, int n)
{
    long long total;
    total = sum[i];

    if (j < (n - 1)) {
        total = total - sum[j + 1];
    }

    return total;
}


/*
Enter number: 5
Enter 5 Elements: 1 2 3 4 5
Suffix Sum: 15  14  12  9  5  
Enter Left and Right Index: 1 3
Range Based Suffix Sum: 9
*/
