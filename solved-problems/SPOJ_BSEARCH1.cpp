#include <iostream>
using namespace std;

int main(void)
{
    int num, query;
    scanf("%d %d", &num, &query);

    int arr[num];

    for(int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    while(query--) {
        int qNum;
        scanf("%d", &qNum);

        int res = -1;
        int l = 0, r = num - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            
            if (arr[mid] == qNum) {
                res = mid;
                r = mid - 1;
            } else if (arr[mid] > qNum) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        printf("%d\n", res);
    }

    return 0;
}

//C++ (g++ 4.3.2) - Accepted


--


/*

#include <iostream>
using namespace std;

int main(void)
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int num, query;
    cin >> num >> query;

    int arr[num];

    for(int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    while(query--) {
        int qNum;
        cin >> qNum;

        int res = -1;
        int l = 0, r = num - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            
            if (arr[mid] == qNum) {
                res = mid;
                r = mid - 1;
            } else if (arr[mid] > qNum) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << res << endl;
    }

    return 0;
}

//C++ (g++ 4.3.2) - TLE
//C++ (gcc 8.3) and C++ (any upper version) - Accepted

*/
