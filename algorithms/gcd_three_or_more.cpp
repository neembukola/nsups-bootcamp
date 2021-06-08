#include <iostream>
using namespace std;

int gcd(int x, int y);

int main() {
    int num;
    cout << "How Many Numbers: "; 
    cin >> num;
    int arr[num];
    cout << "Enter Numbers: "; 
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }
    int find_gcd = arr[0];
    for (int i = 1; i < num; i++) {
        find_gcd = gcd(find_gcd, arr[i]);
    }
    cout << "Desired GCD of " << num << " the Elements is " << find_gcd << endl;
    return 0;
}

//Algorithm: Greatest Common Divisor
//Complexity: O(log(min(a, b)) // USE THIS

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    }
    return gcd(y, x % y); 
}


/*
Simple Solution for 3 Elements:
gcd(a, b, c) = gcd(gcd(a, b), c)
*/
