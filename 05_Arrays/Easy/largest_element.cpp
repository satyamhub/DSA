#include <bits/stdc++.h>
using namespace std;

/*
Problem: Largest element in an array

Pattern: linear scan

Sample Input:
5
3 7 2 9 4

Sample Output:
9

Idea:
- Track the maximum seen so far while traversing the array once.

Brute:
- Sort the array and return the last element.
- Time: O(n log n)
- Space: depends on sorting implementation

Optimal:
- Single traversal
- Time: O(n)
- Space: O(1)

Edge Cases:
- Single element array
- All elements equal
- Negative values
*/

int largestOptimal(const vector<int> &arr) {
    int largest = arr[0];
    for (int value : arr) {
        largest = max(largest, value);
    }
    return largest;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << largestOptimal(arr) << '\n';
    return 0;
}
