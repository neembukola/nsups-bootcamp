int qNum;
cin >> qNum;

int res = -1;
int left = 0, right = num - 1;

while (left <= right) {
    int mid = left + (right - left) / 2;
            
    if (arr[mid] > qNum) {
        res = mid;
        right = mid - 1;
    } else {
        left = mid + 1;
    }
}


/*

Find Lower Index of a Lower Number than the Given Number.

int arr[] = {10, 20, 30, 30, 40, 40, 50, 60, 70};

if qNum is 40, the lower index will be 6. 
if qNum is 25, the lower index will be 2. 
if qNum is 65, the lower index will be 8.

*/
