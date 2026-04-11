/*
------Brute Force-------
I will Itterate through the array and if nums[i]>nums[j], then i will
cnt++.
TC:O(N^2)
SC:O(1)
*/

/*
------Optimal---------
I will  use merge sort and count the inversions while merging the two halves.
TC:O(NlogN)
SC:O(N) because of the temporary merge array
i will count the inversions when the right element is smaller than the left element,
because all the elements to the right of the left element will also be greater than the right element.
and i will add the count of inversions to the total count.

*/

#include <bits/stdc++.h>
using namespace std;

int countInversionBrute(int nums[], int n) {
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] > nums[j]) {
                cnt++;
            }
        }
    }
    return cnt;
}

int mergeAndCount(int nums[], int low, int mid, int high) {
    vector<int> temp;
    temp.reserve(high - low + 1);

    int left = low;
    int right = mid + 1;
    int cnt = 0;

    while (left <= mid && right <= high) {
        if (nums[left] <= nums[right]) {
            temp.push_back(nums[left++]);
        } else {
            temp.push_back(nums[right++]);
            cnt += (mid - left + 1); // Count inversions
        }
    }

    while (left <= mid) {
        temp.push_back(nums[left++]);
    }

    while (right <= high) {
        temp.push_back(nums[right++]);
    }

    for (int i = 0; i < static_cast<int>(temp.size()); i++) {
        nums[low + i] = temp[i];
    }

    return cnt;
}

int mergeSort(int nums[], int low, int high) {
    int cnt = 0;
    if (low < high) {
        int mid = low + (high - low) / 2;
        cnt += mergeSort(nums, low, mid);
        cnt += mergeSort(nums, mid + 1, high);
        cnt += mergeAndCount(nums, low, mid, high);
    }
    return cnt;
}

int countInversionOptimal(int nums[], int n) {
    return mergeSort(nums, 0, n - 1);
}

int main() {

    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums[i] = x;
    }

    // cout << countInversionBrute(nums,n);
    cout << countInversionOptimal(nums, n);

    return 0;
}
