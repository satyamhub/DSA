#include <bits/stdc++.h>
using namespace std;

/*
Maximum Consecutive Ones

Pattern: linear scan

Sample Input:
6
1 1 0 1 1 1

Sample Output:
3

- Brute/basic linear scan
- Time: O(n)
- Space: O(1)
*/

int maxConsecutiveOnes(const vector<int> &nums) {
    int current = 0;
    int best = 0;

    for (int value : nums) {
        if (value == 1) {
            current++;
            best = max(best, current);
        } else {
            current = 0;
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

    cout << maxConsecutiveOnes(nums) << '\n';
    return 0;
}
