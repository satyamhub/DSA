#include <bits/stdc++.h>
using namespace std;

/*
Quick Sort

Pattern: sorting, divide and conquer

Sample Input:
5
10 7 8 9 1

Sample Output:
1 7 8 9 10

- Divide and conquer, in-place partitioning
- Best/Average Time: O(n log n)
- Worst Time: O(n^2)
- Space: O(log n) average recursion stack, O(n) worst stack depth
*/

int partitionArray(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (i <= high - 1 && arr[i] <= pivot) {
            i++;
        }
        while (j >= low + 1 && arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high) {
    if (low >= high) {
        return;
    }

    int pivotIndex = partitionArray(arr, low, high);
    quickSort(arr, low, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, high);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    for (int value : arr) {
        cout << value << ' ';
    }
    cout << '\n';

    return 0;
}
