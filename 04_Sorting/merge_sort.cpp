#include <bits/stdc++.h>
using namespace std;

/*
Merge Sort

Pattern: sorting, divide and conquer

Sample Input:
5
38 27 43 3 9

Sample Output:
3 9 27 38 43

- Divide and conquer algorithm
- Time: O(n log n) in best, average, and worst case
- Space: O(n) because of the temporary merge array
*/

void mergeRanges(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    temp.reserve(high - low + 1);

    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left++]);
        } else {
            temp.push_back(arr[right++]);
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left++]);
    }

    while (right <= high) {
        temp.push_back(arr[right++]);
    }

    for (int i = 0; i < static_cast<int>(temp.size()); i++) {
        arr[low + i] = temp[i];
    }
}

void mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) {
        return;
    }

    int mid = low + (high - low) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    mergeRanges(arr, low, mid, high);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    for (int value : arr) {
        cout << value << ' ';
    }
    cout << '\n';

    return 0;
}
