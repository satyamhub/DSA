#include <bits/stdc++.h>
using namespace std;

/*
Problem: Reverse an array using recursion

Pattern: recursion, two pointers

Sample Input:
5
1 2 3 4 5

Sample Output:
5 4 3 2 1

Approach: Two-pointer recursion
- Swap ends and move inward
- Time: O(n)
- Space: O(n)
*/

void reverseArray(vector<int> &arr, int left, int right) {
    if (left >= right) {
        return;
    }
    swap(arr[left], arr[right]);
    reverseArray(arr, left + 1, right - 1);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, 0, n - 1);

    for (int value : arr) {
        cout << value << ' ';
    }
    cout << '\n';

    return 0;
}
