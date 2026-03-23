#include <bits/stdc++.h>
using namespace std;

/*
Majority Element (> n / 2 occurrences)

Pattern: hashing, Boyer-Moore voting

Sample Input:
7
2 2 1 1 1 2 2

Sample Output:
2

1. Brute
   - Count frequency for every element
   - Time: O(n^2), Space: O(1)

2. Better
   - Hash map
   - Time: O(n log n) with map, O(n) average with unordered_map
   - Space: O(n)

3. Optimal
   - Moore's Voting Algorithm + verification
   - Time: O(n), Space: O(1)
*/

int majorityElementBrute(const vector<int> &nums) {
    int n = static_cast<int>(nums.size());

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }
        if (count > n / 2) {
            return nums[i];
        }
    }

    return -1;
}

int majorityElementBetter(const vector<int> &nums) {
    unordered_map<int, int> freq;

    for (int value : nums) {
        freq[value]++;
    }

    for (auto entry : freq) {
        if (entry.second > static_cast<int>(nums.size()) / 2) {
            return entry.first;
        }
    }

    return -1;
}

int majorityElementOptimal(const vector<int> &nums) {
    int candidate = -1;
    int count = 0;

    for (int value : nums) {
        if (count == 0) {
            candidate = value;
            count = 1;
        } else if (value == candidate) {
            count++;
        } else {
            count--;
        }
    }

    count = 0;
    for (int value : nums) {
        if (value == candidate) {
            count++;
        }
    }

    return count > static_cast<int>(nums.size()) / 2 ? candidate : -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << majorityElementOptimal(nums) << '\n';
    return 0;
}
