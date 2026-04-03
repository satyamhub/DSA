#include <bits/stdc++.h>
using namespace std;

/*
Four Sum

Find all unique quadruplets whose sum is equal to the target.

Sample Input:
6
1 0 -1 0 -2 2
0

Sample Output:
-2 -1 1 2
-2 0 0 2
-1 0 0 1

1. Brute
   - Try every quadruplet
   - Time: O(n^4), Space: O(1) extra

2. Better
   - Sort and fix two indices, then use two pointers
   - Time: O(n^3), Space: O(1) extra

3. Optimal
   - Sort, skip duplicates carefully, and use two pointers for the last two
     positions
   - Time: O(n^3), Space: O(1) extra
*/

vector<vector<int>> fourSumBrute(const vector<int> &nums, int target) {
    int n = static_cast<int>(nums.size());
    set<vector<int>> uniqueQuads;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                for (int l = k + 1; l < n; l++) {
                    long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[k] + nums[l];
                    if (sum == target) {
                        vector<int> quad = {nums[i], nums[j], nums[k], nums[l]};
                        sort(quad.begin(), quad.end());
                        uniqueQuads.insert(quad);
                    }
                }
            }
        }
    }

    return {uniqueQuads.begin(), uniqueQuads.end()};
}

vector<vector<int>> fourSumBetter(vector<int> nums, int target) {
    sort(nums.begin(), nums.end());
    set<vector<int>> uniqueQuads;
    int n = static_cast<int>(nums.size());

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int left = j + 1;
            int right = n - 1;

            while (left < right) {
                long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[left] + nums[right];
                if (sum == target) {
                    uniqueQuads.insert({nums[i], nums[j], nums[left], nums[right]});
                    left++;
                    right--;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }

    return {uniqueQuads.begin(), uniqueQuads.end()};
}

vector<vector<int>> fourSumOptimal(vector<int> nums, int target) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    int n = static_cast<int>(nums.size());

    for (int i = 0; i < n; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        for (int j = i + 1; j < n; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) {
                continue;
            }

            int left = j + 1;
            int right = n - 1;

            while (left < right) {
                long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[left] + nums[right];
                if (sum == target) {
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});

                    int leftValue = nums[left];
                    int rightValue = nums[right];
                    while (left < right && nums[left] == leftValue) {
                        left++;
                    }
                    while (left < right && nums[right] == rightValue) {
                        right--;
                    }
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }

    return result;
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

    auto ans = fourSumOptimal(nums, target);
    for (const auto &quad : ans) {
        cout << quad[0] << ' ' << quad[1] << ' ' << quad[2] << ' ' << quad[3] << '\n';
    }
    return 0;
}
