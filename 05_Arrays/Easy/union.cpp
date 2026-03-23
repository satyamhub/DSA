#include <bits/stdc++.h>
using namespace std;

/*
Union of Two Sorted Arrays

Pattern: two pointers

1. Brute
   - Insert all values into set
   - Time: O((n + m) log(n + m)), Space: O(n + m)

2. Optimal
   - Two pointers on sorted arrays
   - Time: O(n + m), Space: O(n + m) for answer
*/

vector<int> unionOptimal(const vector<int> &arr1, const vector<int> &arr2) {
    int i = 0;
    int j = 0;
    vector<int> result;

    while (i < static_cast<int>(arr1.size()) && j < static_cast<int>(arr2.size())) {
        if (arr1[i] <= arr2[j]) {
            if (result.empty() || result.back() != arr1[i]) {
                result.push_back(arr1[i]);
            }
            i++;
        } else {
            if (result.empty() || result.back() != arr2[j]) {
                result.push_back(arr2[j]);
            }
            j++;
        }
    }

    while (i < static_cast<int>(arr1.size())) {
        if (result.empty() || result.back() != arr1[i]) {
            result.push_back(arr1[i]);
        }
        i++;
    }

    while (j < static_cast<int>(arr2.size())) {
        if (result.empty() || result.back() != arr2[j]) {
            result.push_back(arr2[j]);
        }
        j++;
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr1(n);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    int m;
    cin >> m;
    vector<int> arr2(m);
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    vector<int> result = unionOptimal(arr1, arr2);
    for (int value : result) {
        cout << value << ' ';
    }
    cout << '\n';

    return 0;
}
