int qNum;
cin >> qNum;

int res = -1;
int left = 0, right = num - 1;

while (left <= right) {
    int mid = left + (right - left) / 2;
            
    if (arr[mid] == qNum) {
        res = mid;
        right = mid - 1;
    } else if (arr[mid] > qNum) {
        right = mid - 1;
    } else {
        left = mid + 1;
    }
}


//Find Index of A Number
//Similar Problem: https://www.spoj.com/problems/BSEARCH1/