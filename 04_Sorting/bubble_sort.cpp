#include <bits/stdc++.h>
using namespace std;

/*
Problem: Bubble Sort

Pattern: sorting

Sample Input:
5
5 1 4 2 8

Sample Output:
1 2 4 5 8

Approach: Repeatedly swap adjacent out-of-order elements
- Time: O(n^2) average and worst case
- Time: O(n) best case with early exit
- Space: O(1)
*/

void bubbleSort(vector<int> &arr) {
    int n = static_cast<int>(arr.size());

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
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

    bubbleSort(arr);

    for (int value : arr) {
        cout << value << ' ';
    }
    cout << '\n';

    return 0;
}
