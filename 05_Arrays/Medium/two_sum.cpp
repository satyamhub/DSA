#include <bits/stdc++.h>
using namespace std;

/*
Two Sum

Given an array and a target, find one pair of indices whose values add up to
the target.

Sample Input:
5
2 7 11 15 1
9

Sample Output:
0 1

1. Brute
   - Check every pair
   - Time: O(n^2), Space: O(1)

2. Better
   - Sort value-index pairs and use two pointers
   - Time: O(n log n), Space: O(n)

3. Optimal
   - Hash map for seen values
   - Time: O(n) average, Space: O(n)
*/

pair<int, int> twoSumBrute(const vector<int> &nums, int target) {
    int n = static_cast<int>(nums.size());

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }

    return {-1, -1};
}

pair<int, int> twoSumBetter(const vector<int> &nums, int target) {
    vector<pair<int, int>> values;
    values.reserve(nums.size());

    for (int i = 0; i < static_cast<int>(nums.size()); i++) {
        values.push_back({nums[i], i});
    }

    sort(values.begin(), values.end());

    int left = 0;
    int right = static_cast<int>(values.size()) - 1;

    while (left < right) {
        long long sum = static_cast<long long>(values[left].first) + values[right].first;
        if (sum == target) {
            return {values[left].second, values[right].second};
        }
        if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return {-1, -1};
}

pair<int, int> twoSumOptimal(const vector<int> &nums, int target) {
    unordered_map<int, int> seen;

    for (int i = 0; i < static_cast<int>(nums.size()); i++) {
        int need = target - nums[i];
        auto it = seen.find(need);
        if (it != seen.end()) {
            return {it->second, i};
        }
        seen[nums[i]] = i;
    }

    return {-1, -1};
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cin >> target;

    auto ans = twoSumOptimal(nums, target);
    cout << ans.first << ' ' << ans.second << '\n';
    return 0;
}
