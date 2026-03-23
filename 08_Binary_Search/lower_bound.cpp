#include <bits/stdc++.h>
using namespace std;

/*
Problem: Lower Bound

Pattern: binary search, boundary search

Sample Input:
5
1 3 3 5 8
4

Sample Output:
3

Idea:
- Find the first index where `arr[index] >= target`.

Brute:
- Scan from left to right.
- Time: O(n)
- Space: O(1)

Optimal:
- Binary search on the first valid position.
- Time: O(log n)
- Space: O(1)

Edge Cases:
- All elements smaller than target
- All elements greater than or equal to target
- Duplicate values
*/

int lowerBoundIndex(const vector<int> &arr, int target) {
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

    cout << lowerBoundIndex(arr, target) << '\n';
    return 0;
}
