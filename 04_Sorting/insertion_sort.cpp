#include <bits/stdc++.h>
using namespace std;

/*
Problem: Insertion Sort

Pattern: sorting

Sample Input:
5
12 11 13 5 6

Sample Output:
5 6 11 12 13

Approach: Insert each element into its correct place in the sorted left portion
- Time: O(n^2) average and worst case
- Time: O(n) best case for already sorted array
- Space: O(1)
*/

void insertionSort(vector<int> &arr) {
    int n = static_cast<int>(arr.size());

    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            swap(arr[j - 1], arr[j]);
            j--;
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

    insertionSort(arr);

    for (int value : arr) {
        cout << value << ' ';
    }
    cout << '\n';

    return 0;
}
