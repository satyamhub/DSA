#include <bits/stdc++.h>
using namespace std;

/*
Problem: Search Insert Position

Pattern: binary search, boundary search

Idea:
- The answer is the lower bound of the target.

Brute:
- Scan from left to right until the first position where value >= target.
- Time: O(n)
- Space: O(1)

Optimal:
- Binary search
- Time: O(log n)
- Space: O(1)

Edge Cases:
- Insert at index 0
- Insert at end
- Target already present
*/

int searchInsertPosition(const vector<int> &arr, int target) {
    int low = 0;
    int high = static_cast<int>(arr.size()) - 1;
    int answer = static_cast<int>(arr.size());

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= target) {
            answer = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return answer;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    cout << searchInsertPosition(arr, target) << '\n';
    return 0;
}
