#include <bits/stdc++.h>
using namespace std;

/*
Problem: Selection Sort

Approach: Repeatedly place the minimum element at the current index
- Time: O(n^2) in best, average, and worst case
- Space: O(1)
*/

void selectionSort(vector<int> &arr) {
    int n = static_cast<int>(arr.size());

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr);

    for (int value : arr) {
        cout << value << ' ';
    }
    cout << '\n';

    return 0;
}
