#include <bits/stdc++.h>
using namespace std;

/*
Problem: Intersection of Two Sorted Arrays

Find intersection (common elements) of two sorted arrays.

Example:
Input: arr1 = [1, 2, 3], arr2 = [2, 3, 4]
Output: [2, 3]

Approach Hint: Two pointers: include when elements match
*/

void solve(vector<int> &arr1, vector<int> &arr2) {
    // Write your solution here
    int n1 = arr1.size();
    int n2 = arr2.size();
    int p1 = 0;
    int p2 = 0;
    while (p1 < n1 && p2 < n2) {
        if (arr1[p1] == arr2[p2]) {
            cout << arr1[p1]<<" ";
            while(p1<(n1-1) && arr1[p1]==arr1[p1+1]){
                p1++;
            }
            while (p2 < (n2 - 1) && arr2[p2] == arr2[p2 + 1]) {
                p2++;
            }
        } else if (arr1[p1] > arr2[p2]) {
            p2++;
        } else {
            p1++;
        }
    }
}

int main() {
    // Test cases
    int n;
    cin >> n;
    vector<int> arr1;
    for (int i = 0; i < n; i++) {
        int q;
        cin >> q;
        arr1.push_back(q);
    }
    int m;
    cin >> m;
    vector<int> arr2;
    for (int i = 0; i < m; i++) {
        int q;
        cin >> q;
        arr2.push_back(q);
    }
    solve(arr1, arr2);
    return 0;
}
