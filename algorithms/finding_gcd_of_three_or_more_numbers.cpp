#include <iostream>
using namespace std;

int gcd(int x, int y);

int main(void)
{
    int num;
    cout << "enter array size: "; 
    cin >> num;
    int arr[num];

    for(int i = 0; i < num; i++) {
        cout << "Array " << i << " Index: ";
        cin >> arr[i];
    }

    int find_gcd = arr[0];
    for(int i = 1; i < num; i++) {
        find_gcd = gcd(find_gcd, arr[i]);
    }

    cout << "desired gcd of " << num << " elements: " << find_gcd << endl;

    return 0;
}

//O(log(min(x, y))) - Most_Efficient
int gcd(int x, int y)
{
    if(y == 0) {
        return x;
    }
    return gcd(y, x % y);
}

/*

    //O(min(a, b))
    int answer;
    for(int i = 1; i <= max(a, b); i++) {
        if(x % i == 0  &&  y % i == 0) {
            answer = i;
        }
    }
    return answer

    ----- * ----

    //O(max(a, b))
    int answer;
    for(int i = 1; i <= max(a, b); i++) {
        if(x % i == 0  &&  y % i == 0) {
            answer = i;
        }
    }
    return answer

 */
