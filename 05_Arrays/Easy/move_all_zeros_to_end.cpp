#include <bits/stdc++.h>
using namespace std;

/*
Move All Zeroes To End

Pattern: two pointers

Sample Input:
5
0 1 0 3 12

Sample Output:
1 3 12 0 0

1. Brute
   - Repeatedly bubble non-zero values left
   - Time: O(n^2), Space: O(1)

2. Optimal
   - Two pointers
   - Time: O(n), Space: O(1)
*/

void moveZeroesBrute(vector<int> &arr) {
    int n = static_cast<int>(arr.size());

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] == 0 && arr[j + 1] != 0) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void moveZeroesOptimal(vector<int> &arr) {
    int writeIndex = 0;

    for (int readIndex = 0; readIndex < static_cast<int>(arr.size()); readIndex++) {
        if (arr[readIndex] != 0) {
            swap(arr[writeIndex], arr[readIndex]);
            writeIndex++;
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    moveZeroesOptimal(arr);

    for (int value : arr) {
        cout << value << ' ';
    }
    cout << '\n';

    return 0;
}
