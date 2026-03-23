#include <bits/stdc++.h>
using namespace std;

/*
Problem: Remove duplicates from a sorted array

Idea:
- Use a write pointer to place the next unique element.

Brute:
- Store unique elements separately.
- Time: O(n)
- Space: O(n)

Optimal:
- Two pointers in-place
- Time: O(n)
- Space: O(1)

Edge Cases:
- Empty array
- Already unique array
- All elements equal
*/

int removeDuplicatesOptimal(vector<int> &arr) {
    if (arr.empty()) {
        return 0;
    }

    int writeIndex = 1;
    for (int readIndex = 1; readIndex < static_cast<int>(arr.size()); readIndex++) {
        if (arr[readIndex] != arr[writeIndex - 1]) {
            arr[writeIndex] = arr[readIndex];
            writeIndex++;
        }
    }

    return writeIndex;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int uniqueCount = removeDuplicatesOptimal(arr);
    for (int i = 0; i < uniqueCount; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';

    return 0;
}
