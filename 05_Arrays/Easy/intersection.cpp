#include <bits/stdc++.h>
using namespace std;

/*
Intersection of Two Sorted Arrays

Pattern: two pointers

Sample Input:
5
1 2 2 3 4
4
2 2 4 6

Sample Output:
2 2 4

1. Brute
   - Nested loops with visited handling
   - Time: O(n * m), Space: O(m) if visited array is used

2. Optimal
   - Two pointers
   - Time: O(n + m), Space: O(min(n, m)) for answer
*/

vector<int> intersectionOptimal(const vector<int> &arr1, const vector<int> &arr2) {
    int i = 0;
    int j = 0;
    vector<int> result;

    while (i < static_cast<int>(arr1.size()) && j < static_cast<int>(arr2.size())) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            result.push_back(arr1[i]);
            i++;
            j++;
        }
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

    vector<int> result = intersectionOptimal(arr1, arr2);
    for (int value : result) {
        cout << value << ' ';
    }
    cout << '\n';

    return 0;
}
