#include <bits/stdc++.h>
using namespace std;

/*
Problem: Second largest element in an array

Pattern: linear scan

Sample Input:
5
3 7 2 9 4

Sample Output:
7

Idea:
- Track largest and second largest while traversing once.

Brute:
- Sort the array and scan from right to find the first distinct value.
- Time: O(n log n)
- Space: depends on sorting implementation

Optimal:
- One traversal with two variables
- Time: O(n)
- Space: O(1)

Edge Cases:
- Array size less than 2
- All elements equal
- Negative values
*/

int secondLargestOptimal(const vector<int> &arr) {
    if (arr.size() < 2) {
        return -1;
    }

    int largest = arr[0];
    int secondLargest = INT_MIN;

    for (int i = 1; i < static_cast<int>(arr.size()); i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest == INT_MIN ? -1 : secondLargest;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << secondLargestOptimal(arr) << '\n';
    return 0;
}
