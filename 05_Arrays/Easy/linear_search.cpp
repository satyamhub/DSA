#include <bits/stdc++.h>
using namespace std;

/*
Linear Search

Pattern: linear scan

- Brute/basic approach: scan left to right
- Time: O(n)
- Space: O(1)
*/

int linearSearch(const vector<int> &arr, int target) {
    for (int i = 0; i < static_cast<int>(arr.size()); i++) {
        if (arr[i] == target) {
            return i;
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

    cout << linearSearch(arr, target) << '\n';
    return 0;
}
