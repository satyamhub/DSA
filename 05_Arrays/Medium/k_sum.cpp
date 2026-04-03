#include <bits/stdc++.h>
using namespace std;

/*
K Sum

Find all unique k-sized combinations whose sum is equal to the target.

Sample Input:
6
1 0 -1 0 -2 2
4
0

Sample Output:
-2 -1 1 2
-2 0 0 2
-1 0 0 1

Input format:
- n
- array elements
- k
- target

1. Brute
   - Generate every k-sized combination
   - Time: O(n^k), Space: O(k) recursion + result storage

2. Better
   - Sort and solve recursively, using two pointers at the 2-sum base case
   - Time: O(n^(k-1)), Space: O(k)

3. Optimal
   - Same recursion, but add duplicate skipping and sum pruning
   - Time: O(n^(k-1)) in the worst case, faster in practice
   - Space: O(k)
*/

vector<vector<int>> twoSumSorted(const vector<int> &nums, int start, long long target) {
    vector<vector<int>> result;
    int left = start;
    int right = static_cast<int>(nums.size()) - 1;

    while (left < right) {
        long long sum = static_cast<long long>(nums[left]) + nums[right];
        if (sum == target) {
            result.push_back({nums[left], nums[right]});

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

    return result;
}

vector<vector<int>> kSumBruteHelper(const vector<int> &nums, int start, int k, long long target, vector<int> &current) {
    vector<vector<int>> result;

    if (static_cast<int>(current.size()) == k) {
        long long sum = 0;
        for (int value : current) {
            sum += value;
        }
        if (sum == target) {
            result.push_back(current);
        }
        return result;
    }

    for (int i = start; i < static_cast<int>(nums.size()); i++) {
        current.push_back(nums[i]);
        vector<vector<int>> subsets = kSumBruteHelper(nums, i + 1, k, target, current);
        result.insert(result.end(), subsets.begin(), subsets.end());
        current.pop_back();
    }

    return result;
}

vector<vector<int>> kSumBrute(const vector<int> &nums, int k, long long target) {
    vector<int> current;
    set<vector<int>> uniqueCombinations;

    vector<vector<int>> combinations = kSumBruteHelper(nums, 0, k, target, current);
    for (auto combination : combinations) {
        sort(combination.begin(), combination.end());
        uniqueCombinations.insert(combination);
    }

    return {uniqueCombinations.begin(), uniqueCombinations.end()};
}

vector<vector<int>> kSumRecursiveBetter(const vector<int> &nums, int start, int k, long long target) {
    vector<vector<int>> result;
    int n = static_cast<int>(nums.size());

    if (k == 2) {
        return twoSumSorted(nums, start, target);
    }

    for (int i = start; i <= n - k; i++) {
        if (i > start && nums[i] == nums[i - 1]) {
            continue;
        }

        vector<vector<int>> subsets = kSumRecursiveBetter(nums, i + 1, k - 1, target - nums[i]);
        for (auto &subset : subsets) {
            subset.insert(subset.begin(), nums[i]);
            result.push_back(subset);
        }
    }

    return result;
}

vector<vector<int>> kSumBetter(vector<int> nums, int k, long long target) {
    sort(nums.begin(), nums.end());
    return kSumRecursiveBetter(nums, 0, k, target);
}

vector<vector<int>> kSumRecursiveOptimal(const vector<int> &nums, int start, int k, long long target) {
    vector<vector<int>> result;
    int n = static_cast<int>(nums.size());

    if (k == 2) {
        return twoSumSorted(nums, start, target);
    }

    if (start + k > n) {
        return result;
    }

    long long minPossible = 0;
    long long maxPossible = 0;
    for (int i = 0; i < k; i++) {
        minPossible += nums[start + i];
        maxPossible += nums[n - 1 - i];
    }
    if (target < minPossible || target > maxPossible) {
        return result;
    }

    for (int i = start; i <= n - k; i++) {
        if (i > start && nums[i] == nums[i - 1]) {
            continue;
        }

        long long smallestWithCurrent = static_cast<long long>(nums[i]);
        for (int j = 1; j < k; j++) {
            smallestWithCurrent += nums[i + j];
        }
        if (smallestWithCurrent > target) {
            break;
        }

        long long largestWithCurrent = static_cast<long long>(nums[i]);
        for (int j = 1; j < k; j++) {
            largestWithCurrent += nums[n - j];
        }
        if (largestWithCurrent < target) {
            continue;
        }

        vector<vector<int>> subsets = kSumRecursiveOptimal(nums, i + 1, k - 1, target - nums[i]);
        for (auto &subset : subsets) {
            subset.insert(subset.begin(), nums[i]);
            result.push_back(subset);
        }
    }

    return result;
}

vector<vector<int>> kSumOptimal(vector<int> nums, int k, long long target) {
    sort(nums.begin(), nums.end());
    return kSumRecursiveOptimal(nums, 0, k, target);
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

    long long target;
    cin >> target;

    auto ans = kSumOptimal(nums, k, target);
    for (const auto &combo : ans) {
        for (int i = 0; i < static_cast<int>(combo.size()); i++) {
            cout << combo[i] << (i + 1 == static_cast<int>(combo.size()) ? '\n' : ' ');
        }
    }
    return 0;
}
