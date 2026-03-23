#include <bits/stdc++.h>
using namespace std;

/*
Longest Subarray With Sum K

1. Brute
   - Check every subarray
   - Time: O(n^2), Space: O(1)

2. Better
   - Prefix sum + hash map
   - Works with positive, zero, and negative numbers
   - Time: O(n), Space: O(n)

3. Optimal for non-negative arrays only
   - Sliding window / two pointers
   - Time: O(n), Space: O(1)
*/

int longestSubarrayBetter(const vector<int> &nums, int k) {
    unordered_map<int, int> firstIndex;
    int prefixSum = 0;
    int best = 0;

    for (int i = 0; i < static_cast<int>(nums.size()); i++) {
        prefixSum += nums[i];

        if (prefixSum == k) {
            best = i + 1;
        }

        if (firstIndex.find(prefixSum - k) != firstIndex.end()) {
            best = max(best, i - firstIndex[prefixSum - k]);
        }

        if (firstIndex.find(prefixSum) == firstIndex.end()) {
            firstIndex[prefixSum] = i;
        }
    }

    return best;
}

int longestSubarrayOptimalNonNegative(const vector<int> &nums, int k) {
    int left = 0;
    int sum = 0;
    int best = 0;

    for (int right = 0; right < static_cast<int>(nums.size()); right++) {
        sum += nums[right];

        while (left <= right && sum > k) {
            sum -= nums[left];
            left++;
        }

        if (sum == k) {
            best = max(best, right - left + 1);
        }
    }

    return best;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int k;
    cin >> k;

    cout << longestSubarrayBetter(nums, k) << '\n';
    // Use this only when the array has no negative numbers:
    // cout << longestSubarrayOptimalNonNegative(nums, k) << '\n';

    return 0;
}
