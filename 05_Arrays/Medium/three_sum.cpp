#include <bits/stdc++.h>
using namespace std;

/*
Three Sum

Find all unique triplets whose sum is equal to the target.

Sample Input:
6
-1 0 1 2 -1 -4
0

Sample Output:
-1 -1 2
-1 0 1

1. Brute
   - Try every triplet
   - Time: O(n^3), Space: O(1) extra

2. Better
   - Sort and fix one index, then use two pointers
   - Time: O(n^2), Space: O(1) extra

3. Optimal
   - Sort and skip duplicates carefully while using two pointers
   - Time: O(n^2), Space: O(1) extra
*/

vector<vector<int>> threeSumBrute(const vector<int> &nums, int target) {
    int n = static_cast<int>(nums.size());
    set<vector<int>> uniqueTriplets;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (nums[i] + nums[j] + nums[k] == target) {
                    vector<int> triplet = {nums[i], nums[j], nums[k]};
                    sort(triplet.begin(), triplet.end());
                    uniqueTriplets.insert(triplet);
                }
            }
        }
    }

    return {uniqueTriplets.begin(), uniqueTriplets.end()};
}

vector<vector<int>> threeSumBetter(vector<int> nums, int target) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;

    for (int i = 0; i < static_cast<int>(nums.size()); i++) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        int left = i + 1;
        int right = static_cast<int>(nums.size()) - 1;

        while (left < right) {
            long long sum = static_cast<long long>(nums[i]) + nums[left] + nums[right];
            if (sum == target) {
                result.push_back({nums[i], nums[left], nums[right]});
                left++;
                right--;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    return result;
}

vector<vector<int>> threeSumOptimal(vector<int> nums, int target) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;

    for (int i = 0; i < static_cast<int>(nums.size()); i++) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        int left = i + 1;
        int right = static_cast<int>(nums.size()) - 1;

        while (left < right) {
            long long sum = static_cast<long long>(nums[i]) + nums[left] + nums[right];
            if (sum == target) {
                result.push_back({nums[i], nums[left], nums[right]});

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

    auto ans = threeSumOptimal(nums, target);
    for (const auto &triplet : ans) {
        cout << triplet[0] << ' ' << triplet[1] << ' ' << triplet[2] << '\n';
    }
    return 0;
}
