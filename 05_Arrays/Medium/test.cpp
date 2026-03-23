#include <bits/stdc++.h>
using namespace std;

/*
Count Pairs Whose Sum Is Divisible By 60

1. Brute
   - Check every pair
   - Time: O(n^2), Space: O(1)

2. Optimal
   - Store frequencies of remainders modulo 60
   - Time: O(n), Space: O(1) because remainder range is fixed
*/

int countPairsDivisibleBy60(const vector<int> &nums) {
    vector<int> freq(60, 0);
    int count = 0;

    for (int value : nums) {
        int rem = value % 60;
        int needed = (60 - rem) % 60;
        count += freq[needed];
        freq[rem]++;
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << countPairsDivisibleBy60(nums) << '\n';
    return 0;
}
