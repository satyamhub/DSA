#include <bits/stdc++.h>
using namespace std;

/*
Problem: Check if an array is sorted in non-decreasing order

Pattern: linear scan

Sample Input:
5
1 2 2 4 5

Sample Output:
true

Idea:
- Compare each element with the previous one.

Optimal:
- Single traversal
- Time: O(n)
- Space: O(1)

Edge Cases:
- Empty array
- One element
- Duplicate values
*/

bool isSorted(const vector<int> &arr) {
    for (int i = 1; i < static_cast<int>(arr.size()); i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << (isSorted(arr) ? "true" : "false") << '\n';
    return 0;
}
