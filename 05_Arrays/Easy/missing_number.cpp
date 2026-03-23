#include <bits/stdc++.h>
using namespace std;

/*
Missing Number in range [0, n]

Pattern: math, bit manipulation

1. Brute
   - Check every number from 0 to n by scanning the array
   - Time: O(n^2), Space: O(1)

2. Better
   - Sum formula
   - Time: O(n), Space: O(1)

3. Optimal
   - XOR method
   - Time: O(n), Space: O(1)
*/

int missingNumberBySum(const vector<int> &nums) {
    long long n = nums.size();
    long long expected = n * (n + 1) / 2;
    long long actual = 0;

    for (int value : nums) {
        actual += value;
    }

    return static_cast<int>(expected - actual);
}

int missingNumberByXor(const vector<int> &nums) {
    int xorIndex = 0;
    int xorValue = 0;
    int n = static_cast<int>(nums.size());

    for (int i = 0; i < n; i++) {
        xorIndex ^= i;
        xorValue ^= nums[i];
    }

    xorIndex ^= n;
    return xorIndex ^ xorValue;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << missingNumberByXor(nums) << '\n';
    // Study switch:
    // cout << missingNumberBySum(nums) << '\n';

    return 0;
}
