/*
Reverse pairs are pairs of indices (i, j) such that i < j and nums[i] > 2 * nums[j].
Example 1:
Input: nums = [1,3,2,3,1]
Output: 2
Explanation: The reverse pairs are:
(1, 4) -> nums[1] = 3 and nums[4] = 1, 3 > 2*1
(3, 4) -> nums[3] = 3 and nums[4] = 1, 3 > 2*1
Example 2:
Input: nums = [2,4,3,5,1]
Output: 3
Explanation: The reverse pairs are:
(0, 4) -> nums[0] = 2 and nums[4]
(1, 4) -> nums[1] = 4 and nums[4] = 1, 4 > 2*1
(2, 4) -> nums[2] = 3 and nums[4] = 1, 3 > 2*1
Constraints:
1 <= nums.length <= 5 * 104
-231 <= nums[i] <= 231 - 1

*/
/*
I will use a brute force approach to count the reverse pairs.
I will use two nested loops to check for all pairs of indices (i, j) such that i < j and nums[i] > 2 * nums[j].
TC:O(N^2)
SC:O(1)
*/

/*
------Optimal---------
I will use merge sort and count the reverse pairs while merging the two halves.
TC:O(NlogN)
SC:O(N) because of the temporary merge array
i will count the reverse pairs when the right element is smaller than the left element,
because all the elements to the right of the left element will also be greater than the right element.
and i will add the count of reverse pairs to the total count.
TC:O(NlogN)
SC:O(N) because of the temporary merge array
*/





#include <bits/stdc++.h>
using namespace std;

int ReversePairsBrute(vector<int> &nums) {
    int cnt = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] > 2LL * nums[j]) {
                cnt++;
            }
        }
    }
    return cnt;
}

int mergeAndCount(vector<int> &nums, int low, int mid, int high) {
    vector<int> temp;
    temp.reserve(high - low + 1);

    int left = low;
    int right = mid + 1;
    int cnt = 0;

    // First pass: count reverse pairs
    int r = mid + 1;
    for (int l = low; l <= mid; l++) {
        while (r <= high && nums[l] > 2LL * nums[r]) {
            r++;
        }
        cnt += (r - mid - 1);
    }

    // Second pass: merge the arrays
    left = low;
    right = mid + 1;
    while (left <= mid && right <= high) {
        if (nums[left] <= nums[right]) {
            temp.push_back(nums[left++]);
        } else {
            temp.push_back(nums[right++]);
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
int mergeSort(vector<int> &nums, int low, int high) {
    int cnt = 0;
    if (low < high) {
        int mid = low + (high - low) / 2;
        cnt += mergeSort(nums, low, mid);
        cnt += mergeSort(nums, mid + 1, high);
        cnt += mergeAndCount(nums, low, mid, high);
    }
    return cnt;
}

int countReversePairs(vector<int> &nums) {
    return mergeSort(nums, 0, nums.size() - 1);
}


int main() {

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //cout<<ReversePairsBrute(arr)<<endl;
    cout << countReversePairs(arr) << endl;


    return 0;
}
