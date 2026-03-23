#include <bits/stdc++.h>
using namespace std;

/*
Left Rotate Array By K Places

1. Brute
   - Rotate left by one, K times
   - Time: O(n * k), Space: O(1)

2. Optimal
   - Reversal algorithm
   - Time: O(n), Space: O(1)
*/

void reverseRange(vector<int> &arr, int left, int right) {
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

void leftRotateByKBrute(vector<int> &arr, int k) {
    int n = static_cast<int>(arr.size());
    k %= n;

    while (k--) {
        int first = arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = first;
    }
}

void leftRotateByKOptimal(vector<int> &arr, int k) {
    int n = static_cast<int>(arr.size());
    k %= n;

    reverseRange(arr, 0, k - 1);
    reverseRange(arr, k, n - 1);
    reverseRange(arr, 0, n - 1);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    leftRotateByKOptimal(arr, k);

    for (int value : arr) {
        cout << value << ' ';
    }
    cout << '\n';

    return 0;
}
