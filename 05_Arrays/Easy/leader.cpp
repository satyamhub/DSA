#include <bits/stdc++.h>
using namespace std;

/*
Leaders in an Array

1. Brute
   - For each element, check all elements to its right
   - Time: O(n^2), Space: O(1)

2. Optimal
   - Traverse from right and track maximum seen so far
   - Time: O(n), Space: O(n) for answer
*/

vector<int> leadersOptimal(const vector<int> &nums) {
    vector<int> answer;
    int bestOnRight = INT_MIN;

    for (int i = static_cast<int>(nums.size()) - 1; i >= 0; i--) {
        if (nums[i] > bestOnRight) {
            answer.push_back(nums[i]);
            bestOnRight = nums[i];
        }
    }

    reverse(answer.begin(), answer.end());
    return answer;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> answer = leadersOptimal(nums);
    for (int value : answer) {
        cout << value << ' ';
    }
    cout << '\n';

    return 0;
}
