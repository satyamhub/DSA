#include <bits/stdc++.h>
using namespace std;

/*
Problem: Binary Search

Pattern: binary search

Idea:
- Use the sorted property of the array to remove half of the search space each step.

Brute:
- Linear search
- Time: O(n)
- Space: O(1)

Optimal:
- Iterative binary search
- Time: O(log n)
- Space: O(1)

Edge Cases:
- Empty array
- Single element
- Target not present
*/

int binarySearchIterative(const vector<int> &arr, int target) {
    int low = 0;
    int high = static_cast<int>(arr.size()) - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
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

    cout << binarySearchIterative(arr, target) << '\n';
    return 0;
}
